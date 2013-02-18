nb2
===

A copy of the Drupal 7 Standard profile, with Behat/Mink testing using Travis CI.

[![Build Status](https://secure.travis-ci.org/sanduhrs/nb2.png)](http://travis-ci.org/sanduhrs/nb2)

## Installation

    # Create Drupal codebase
    drush make https://raw.github.com/sanduhrs/nb2/master/build.make public_html

    # Install Drupal
    cd public_html
    drush si nb --sites-subdir=default --db-url=mysql://USERNAME:PASSWORD@localhost/DB_NAME --account-name=admin --account-pass=password --site-mail=admin@example.com --site-name="NB Profile" --yes

    # Install testing tools
    cd profiles/nb/tests/behat
    curl -s http://getcomposer.org/installer | php
    php composer.phar install

##### Configure Behat
Modify `/profiles/nb/tests/behat/behat.yml`
Set `base_url` to your local host

    # Run tests
    cd /profiles/nb/tests/behat
    ./bin/behat

Create `behat.local.yml` from the example file and set your drush alias for the site.

## Files of note

* [travis.yml](https://github.com/sprice/classic/blob/master/.travis.yml)
* [behat.yml](https://github.com/sprice/classic/blob/master/tests/behat/behat.yml)
* [index.features](https://github.com/sprice/classic/blob/master/tests/behat/features/index.feature)
