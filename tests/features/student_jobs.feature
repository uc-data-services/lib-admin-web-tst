@student_jobs
Feature: Student Job Scenarios via Drupal
  In order to request, post, unpublish, or repost a student job requisition
  As a student supervisor or HR analyst
  I need to be able to request, post, unpublish a student job to be filled

  @post @ssuper
  Scenario: Create a new Student Job
  	Given I am an anonymous user
    Given I am on the homepage
    And I am on "node/add/job-student"
    And I fill in "Student Job Title" with "Another Test Job"
    And I fill in "Job#" with "42"
    #When I select "Data Lab" from "Department"
    When I select "Student Assistant I, Level 1, ($10.60/hr)" from "Classification"
    And I fill in "Supervisor" with "Honza"
    And I fill in "Minimum Hours/Week" with "0"
    And I fill in "Maximum Hours/Week" with "168"
    And I fill in "Minimum Hours/Shift" with "0"
    And I fill in "Specific Work Hours" with "some random information"
    And I fill in "Duties" with "Bring Honza Nourishment"
    And I fill in "Required Qualifications" with "Be Cool"
    And I fill in "Desired Qualifications" with "Be Chill"
    And I fill in "Special Notes" with "Best Job Ever"
    And I fill in "Kronos Supervisor" with "No Idea"
    And I fill in "Number of Students to Hire" with "1"
    And I fill in "Chartstring" with "1990-5240"
    And I press "Save"
    Then I should see "has been created"
    Then I should see "your request has been sent to the Student Employment Coordinator"

  @scoord @tbd
  Scenario: Reviews, approves and publishes student job
    Given I am on "jobs/student-job/circulation-job"
    When I follow "Workflow"
    Then I should see approve
