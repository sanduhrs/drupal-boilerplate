Drupal Boilerplate
==================

An exlusive Drupal 7 install profile.

Supports acceptance testing with Behat/Mink using Travis CI.

[![Build Status](https://travis-ci.org/sanduhrs/drupal-boilerplate.png?branch=master)](https://travis-ci.org/sanduhrs/drupal-boilerplate)

## Prerequisites

* PHP 5.4 CLI http://php.net/

    sudo apt-get install php5-cli

* PEAR http://pear.php.net/

    sudo apt-get install php-pear

* Drush http://drush.ws/

    pear channel-discover pear.drush.org
    pear install drush/drush

## Installation

Build the codebase as defined in this profile.

    drush make build.make build

Install the site using this profile

    drush site-install boilerplate --db-url=mysql://USERNAME:PASSWORD@localhost/DB_NAME --root=${PWD}/build -y

## Acceptance tests

Install tools for testing

    cd build/profiles/boilerplate/tests/behat/
    curl -s http://getcomposer.org/installer | php
    php composer.phar install

Add new tests to build/profiles/boilerplate/tests/behat/features/
See Behat http://behat.org/ for more info.

    # Run tests
    cd build/profiles/boilerplate/tests/behat
    drush runserver :9002 --server=builtin &
    ./bin/behat

## License
Copyright (c) 2013 Stefan Auditor
Licensed under the GNU General Public License, GPL v2.
