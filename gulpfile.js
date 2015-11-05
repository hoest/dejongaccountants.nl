var gulp = require('gulp');

var jshint = require('gulp-jshint');
var sourcemaps = require('gulp-sourcemaps');
var stylint = require('gulp-stylint');
var stylus = require('gulp-stylus');
var uglify = require('gulp-uglify');

var jeet = require('jeet');
var rupture = require('rupture');
var axis = require('axis');
var autoprefixer = require('autoprefixer-stylus');

gulp.task('stylus', function () {
  return gulp.src(['./src/stylus/*.styl', '!./src/stylus/_*.styl'])
             .pipe(stylint())
             .pipe(sourcemaps.init())
             .pipe(stylus({
               compress: true,
               use: [rupture(), jeet(), axis(), autoprefixer()]
             }))
             .pipe(sourcemaps.write('.'))
             .pipe(gulp.dest('./_public/css'));
});

gulp.task('js', function() {
  return gulp.src('./src/js/*.js')
             .pipe(jshint())
             .pipe(jshint.reporter('jshint-stylish'))
             .pipe(uglify())
             .pipe(gulp.dest('./_public/js/'));
});

gulp.task('copy', function() {
  return gulp.src('./src/*.html')
             .pipe(gulp.dest('./_public'));
});

gulp.task('default', ['stylus', 'js', 'copy']);
