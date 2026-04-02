#' Create a new VpsSnapshot
#'
#' @description
#' A VPS snapshot (point-in-time backup) stored on the host node.
#'
#' @docType class
#' @title VpsSnapshot
#' @description VpsSnapshot Class
#' @format An \code{R6Class} generator object
#' @field name Snapshot name. character [optional]
#' @field used Disk space used by this snapshot in bytes. integer [optional]
#' @field date Unix timestamp of when the snapshot was created. integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsSnapshot <- R6::R6Class(
  "VpsSnapshot",
  public = list(
    `name` = NULL,
    `used` = NULL,
    `date` = NULL,

    #' @description
    #' Initialize a new VpsSnapshot class.
    #'
    #' @param name Snapshot name.
    #' @param used Disk space used by this snapshot in bytes.
    #' @param date Unix timestamp of when the snapshot was created.
    #' @param ... Other optional arguments.
    initialize = function(`name` = NULL, `used` = NULL, `date` = NULL, ...) {
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!is.null(`used`)) {
        if (!(is.numeric(`used`) && length(`used`) == 1)) {
          stop(paste("Error! Invalid data for `used`. Must be an integer:", `used`))
        }
        self$`used` <- `used`
      }
      if (!is.null(`date`)) {
        if (!(is.numeric(`date`) && length(`date`) == 1)) {
          stop(paste("Error! Invalid data for `date`. Must be an integer:", `date`))
        }
        self$`date` <- `date`
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
    #' @return VpsSnapshot as a base R list.
    #' @examples
    #' # convert array of VpsSnapshot (x) to a data frame
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
    #' Convert VpsSnapshot to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsSnapshotObject <- list()
      if (!is.null(self$`name`)) {
        VpsSnapshotObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`used`)) {
        VpsSnapshotObject[["used"]] <-
          self$`used`
      }
      if (!is.null(self$`date`)) {
        VpsSnapshotObject[["date"]] <-
          self$`date`
      }
      return(VpsSnapshotObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsSnapshot
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsSnapshot
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`used`)) {
        self$`used` <- this_object$`used`
      }
      if (!is.null(this_object$`date`)) {
        self$`date` <- this_object$`date`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsSnapshot in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsSnapshot
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsSnapshot
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`name` <- this_object$`name`
      self$`used` <- this_object$`used`
      self$`date` <- this_object$`date`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsSnapshot and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsSnapshot
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
# VpsSnapshot$unlock()
#
## Below is an example to define the print function
# VpsSnapshot$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsSnapshot$lock()

