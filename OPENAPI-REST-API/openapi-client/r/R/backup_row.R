#' Create a new BackupRow
#'
#' @description
#' A result row from the `Backups` `GET` request.
#'
#' @docType class
#' @title BackupRow
#' @description BackupRow Class
#' @format An \code{R6Class} generator object
#' @field backup_id The id of the backup. character [optional]
#' @field backup_name The name of the backup. character [optional]
#' @field backup_cost The cost of the backup. character [optional]
#' @field backup_username The username of the backup. character [optional]
#' @field backup_status The status of the backup. character [optional]
#' @field services_name The services name of the backup. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BackupRow <- R6::R6Class(
  "BackupRow",
  public = list(
    `backup_id` = NULL,
    `backup_name` = NULL,
    `backup_cost` = NULL,
    `backup_username` = NULL,
    `backup_status` = NULL,
    `services_name` = NULL,

    #' @description
    #' Initialize a new BackupRow class.
    #'
    #' @param backup_id The id of the backup.
    #' @param backup_name The name of the backup.
    #' @param backup_cost The cost of the backup.
    #' @param backup_username The username of the backup.
    #' @param backup_status The status of the backup.
    #' @param services_name The services name of the backup.
    #' @param ... Other optional arguments.
    initialize = function(`backup_id` = NULL, `backup_name` = NULL, `backup_cost` = NULL, `backup_username` = NULL, `backup_status` = NULL, `services_name` = NULL, ...) {
      if (!is.null(`backup_id`)) {
        if (!(is.character(`backup_id`) && length(`backup_id`) == 1)) {
          stop(paste("Error! Invalid data for `backup_id`. Must be a string:", `backup_id`))
        }
        self$`backup_id` <- `backup_id`
      }
      if (!is.null(`backup_name`)) {
        if (!(is.character(`backup_name`) && length(`backup_name`) == 1)) {
          stop(paste("Error! Invalid data for `backup_name`. Must be a string:", `backup_name`))
        }
        self$`backup_name` <- `backup_name`
      }
      if (!is.null(`backup_cost`)) {
        if (!(is.character(`backup_cost`) && length(`backup_cost`) == 1)) {
          stop(paste("Error! Invalid data for `backup_cost`. Must be a string:", `backup_cost`))
        }
        self$`backup_cost` <- `backup_cost`
      }
      if (!is.null(`backup_username`)) {
        if (!(is.character(`backup_username`) && length(`backup_username`) == 1)) {
          stop(paste("Error! Invalid data for `backup_username`. Must be a string:", `backup_username`))
        }
        self$`backup_username` <- `backup_username`
      }
      if (!is.null(`backup_status`)) {
        if (!(is.character(`backup_status`) && length(`backup_status`) == 1)) {
          stop(paste("Error! Invalid data for `backup_status`. Must be a string:", `backup_status`))
        }
        self$`backup_status` <- `backup_status`
      }
      if (!is.null(`services_name`)) {
        if (!(is.character(`services_name`) && length(`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", `services_name`))
        }
        self$`services_name` <- `services_name`
      }
    },

    #' @description
    #' Convert to an R object. This method is deprecated. Use `toSimpleType()` instead.
    toJSON = function() {
      .Deprecated(new = "toSimpleType", msg = "Use the '$toSimpleType()' method instead since that is more clearly named. Use '$toJSONString()' to get a JSON string")
      return(self$toSimpleType())
    },

    #' @description
    #' Convert to a List
    #'
    #' Convert the R6 object to a list to work more easily with other tooling.
    #'
    #' @return BackupRow as a base R list.
    #' @examples
    #' # convert array of BackupRow (x) to a data frame
    #' \dontrun{
    #' library(purrr)
    #' library(tibble)
    #' df <- x |> map(\(y)y$toList()) |> map(as_tibble) |> list_rbind()
    #' df
    #' }
    toList = function() {
      return(self$toSimpleType())
    },

    #' @description
    #' Convert BackupRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BackupRowObject <- list()
      if (!is.null(self$`backup_id`)) {
        BackupRowObject[["backup_id"]] <-
          self$`backup_id`
      }
      if (!is.null(self$`backup_name`)) {
        BackupRowObject[["backup_name"]] <-
          self$`backup_name`
      }
      if (!is.null(self$`backup_cost`)) {
        BackupRowObject[["backup_cost"]] <-
          self$`backup_cost`
      }
      if (!is.null(self$`backup_username`)) {
        BackupRowObject[["backup_username"]] <-
          self$`backup_username`
      }
      if (!is.null(self$`backup_status`)) {
        BackupRowObject[["backup_status"]] <-
          self$`backup_status`
      }
      if (!is.null(self$`services_name`)) {
        BackupRowObject[["services_name"]] <-
          self$`services_name`
      }
      return(BackupRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`backup_id`)) {
        self$`backup_id` <- this_object$`backup_id`
      }
      if (!is.null(this_object$`backup_name`)) {
        self$`backup_name` <- this_object$`backup_name`
      }
      if (!is.null(this_object$`backup_cost`)) {
        self$`backup_cost` <- this_object$`backup_cost`
      }
      if (!is.null(this_object$`backup_username`)) {
        self$`backup_username` <- this_object$`backup_username`
      }
      if (!is.null(this_object$`backup_status`)) {
        self$`backup_status` <- this_object$`backup_status`
      }
      if (!is.null(this_object$`services_name`)) {
        self$`services_name` <- this_object$`services_name`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BackupRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`backup_id` <- this_object$`backup_id`
      self$`backup_name` <- this_object$`backup_name`
      self$`backup_cost` <- this_object$`backup_cost`
      self$`backup_username` <- this_object$`backup_username`
      self$`backup_status` <- this_object$`backup_status`
      self$`services_name` <- this_object$`services_name`
      self
    },

    #' @description
    #' Validate JSON input with respect to BackupRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BackupRow
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      invalid_fields
    },

    #' @description
    #' Print the object
    print = function() {
      print(jsonlite::prettify(self$toJSONString()))
      invisible(self)
    }
  ),
  # Lock the class to prevent modifications to the method or field
  lock_class = TRUE
)
## Uncomment below to unlock the class to allow modifications of the method or field
# BackupRow$unlock()
#
## Below is an example to define the print function
# BackupRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BackupRow$lock()

