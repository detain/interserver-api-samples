#' Create a new Region
#'
#' @description
#' A datacenter region where a server can be provisioned.
#'
#' @docType class
#' @title Region
#' @description Region Class
#' @format An \code{R6Class} generator object
#' @field region_id  integer [optional]
#' @field region_name  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Region <- R6::R6Class(
  "Region",
  public = list(
    `region_id` = NULL,
    `region_name` = NULL,

    #' @description
    #' Initialize a new Region class.
    #'
    #' @param region_id region_id
    #' @param region_name region_name
    #' @param ... Other optional arguments.
    initialize = function(`region_id` = NULL, `region_name` = NULL, ...) {
      if (!is.null(`region_id`)) {
        if (!(is.numeric(`region_id`) && length(`region_id`) == 1)) {
          stop(paste("Error! Invalid data for `region_id`. Must be an integer:", `region_id`))
        }
        self$`region_id` <- `region_id`
      }
      if (!is.null(`region_name`)) {
        if (!(is.character(`region_name`) && length(`region_name`) == 1)) {
          stop(paste("Error! Invalid data for `region_name`. Must be a string:", `region_name`))
        }
        self$`region_name` <- `region_name`
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
    #' @return Region as a base R list.
    #' @examples
    #' # convert array of Region (x) to a data frame
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
    #' Convert Region to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      RegionObject <- list()
      if (!is.null(self$`region_id`)) {
        RegionObject[["region_id"]] <-
          self$`region_id`
      }
      if (!is.null(self$`region_name`)) {
        RegionObject[["region_name"]] <-
          self$`region_name`
      }
      return(RegionObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of Region
    #'
    #' @param input_json the JSON input
    #' @return the instance of Region
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`region_id`)) {
        self$`region_id` <- this_object$`region_id`
      }
      if (!is.null(this_object$`region_name`)) {
        self$`region_name` <- this_object$`region_name`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return Region in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of Region
    #'
    #' @param input_json the JSON input
    #' @return the instance of Region
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`region_id` <- this_object$`region_id`
      self$`region_name` <- this_object$`region_name`
      self
    },

    #' @description
    #' Validate JSON input with respect to Region and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of Region
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
# Region$unlock()
#
## Below is an example to define the print function
# Region$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# Region$lock()

