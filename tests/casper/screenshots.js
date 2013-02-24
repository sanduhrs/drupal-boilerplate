var casper = require('casper').create();

casper.start('http://127.0.0.1:9002', function() {
  // selector capture
  //console.log(this.captureBase64('png', '#lga'));
  // clipRect capture
  //console.log(this.captureBase64('png', {
  //  top: 0,
  //  left: 0,
  //  width: 320,
  //  height: 200
  //}));
  // whole page capture
  console.log(this.captureBase64('png'));
});
casper.run();

casper.start('http://127.0.0.1:9002/user', function() {
  // whole page capture
  console.log(this.captureBase64('png'));
});
casper.run();

casper.start('http://127.0.0.1:9002/admin', function() {
  // whole page capture
  console.log(this.captureBase64('png'));
});
casper.run();