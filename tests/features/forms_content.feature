@forms
Feature: Forms section
  In order to get a list of Forms 
  As any user
  I should go to Forms section

  Scenario: Browse to the Forms page
    Given I am on the homepage
    When I follow "FORMS"
    Then I should see the heading "LHRD Online Forms - The Library - UC Berkeley"
    And I should see the following <links> 
    | links                      |
    | Staff Job                  |
    | Student Job                |
    | Travel/Training/Development Request             |
