asws-tests
==========

BeHat and Gherkin files for testing the Admin Services Website. 

### Gherkin tests

The Gherkin tests are in the [features/](https://github.com/jt14den/asws-tests/tree/master/features) folder and have a .feature 
extension. They are formulatic natural language scenarios that will be converted to a browser test by BeHat. 

Gherkin tests look like this: 

```gherkin_en
Feature: Drupal Create Travel or Development Request
  In order to get approved for travel or development activities 
  As a staff user
  I want create an a travel request
  
  @api
  Scenario: Create an travel request from the add travel request page
    Given I am logged in as a user with the 'authenticated user' role
    And I am on 'node/add/travel-form'
    When I fill in 'Activity title' with 'Going Rogue'
    And I select "Library professional development" from the suggestion "Activity Type"
```

Feel free to add more scenarios to these tests. 
