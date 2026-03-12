#' Create a new LicensesOrderServiceCategories509
#'
#' @description
#' LicensesOrderServiceCategories509 Class
#'
#' @docType class
#' @title LicensesOrderServiceCategories509
#' @description LicensesOrderServiceCategories509 Class
#' @format An \code{R6Class} generator object
#' @field category_id Category ID character [optional]
#' @field category_name Category Name character [optional]
#' @field category_tag Category Tag character [optional]
#' @field category_module Category Module character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LicensesOrderServiceCategories509 <- R6::R6Class(
  "LicensesOrderServiceCategories509",
  public = list(
    `category_id` = NULL,
    `category_name` = NULL,
    `category_tag` = NULL,
    `category_module` = NULL,

    #' @description
    #' Initialize a new LicensesOrderServiceCategories509 class.
    #'
    #' @param category_id Category ID
    #' @param category_name Category Name
    #' @param category_tag Category Tag
    #' @param category_module Category Module
    #' @param ... Other optional arguments.
    initialize = function(`category_id` = NULL, `category_name` = NULL, `category_tag` = NULL, `category_module` = NULL, ...) {
      if (!is.null(`category_id`)) {
        if (!(is.character(`category_id`) && length(`category_id`) == 1)) {
          stop(paste("Error! Invalid data for `category_id`. Must be a string:", `category_id`))
        }
        self$`category_id` <- `category_id`
      }
      if (!is.null(`category_name`)) {
        if (!(is.character(`category_name`) && length(`category_name`) == 1)) {
          stop(paste("Error! Invalid data for `category_name`. Must be a string:", `category_name`))
        }
        self$`category_name` <- `category_name`
      }
      if (!is.null(`category_tag`)) {
        if (!(is.character(`category_tag`) && length(`category_tag`) == 1)) {
          stop(paste("Error! Invalid data for `category_tag`. Must be a string:", `category_tag`))
        }
        self$`category_tag` <- `category_tag`
      }
      if (!is.null(`category_module`)) {
        if (!(is.character(`category_module`) && length(`category_module`) == 1)) {
          stop(paste("Error! Invalid data for `category_module`. Must be a string:", `category_module`))
        }
        self$`category_module` <- `category_module`
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
    #' @return LicensesOrderServiceCategories509 as a base R list.
    #' @examples
    #' # convert array of LicensesOrderServiceCategories509 (x) to a data frame
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
    #' Convert LicensesOrderServiceCategories509 to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LicensesOrderServiceCategories509Object <- list()
      if (!is.null(self$`category_id`)) {
        LicensesOrderServiceCategories509Object[["category_id"]] <-
          self$`category_id`
      }
      if (!is.null(self$`category_name`)) {
        LicensesOrderServiceCategories509Object[["category_name"]] <-
          self$`category_name`
      }
      if (!is.null(self$`category_tag`)) {
        LicensesOrderServiceCategories509Object[["category_tag"]] <-
          self$`category_tag`
      }
      if (!is.null(self$`category_module`)) {
        LicensesOrderServiceCategories509Object[["category_module"]] <-
          self$`category_module`
      }
      return(LicensesOrderServiceCategories509Object)
    },

    #' @description
    #' Deserialize JSON string into an instance of LicensesOrderServiceCategories509
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicensesOrderServiceCategories509
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`category_id`)) {
        self$`category_id` <- this_object$`category_id`
      }
      if (!is.null(this_object$`category_name`)) {
        self$`category_name` <- this_object$`category_name`
      }
      if (!is.null(this_object$`category_tag`)) {
        self$`category_tag` <- this_object$`category_tag`
      }
      if (!is.null(this_object$`category_module`)) {
        self$`category_module` <- this_object$`category_module`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LicensesOrderServiceCategories509 in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LicensesOrderServiceCategories509
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicensesOrderServiceCategories509
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`category_id` <- this_object$`category_id`
      self$`category_name` <- this_object$`category_name`
      self$`category_tag` <- this_object$`category_tag`
      self$`category_module` <- this_object$`category_module`
      self
    },

    #' @description
    #' Validate JSON input with respect to LicensesOrderServiceCategories509 and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LicensesOrderServiceCategories509
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
# LicensesOrderServiceCategories509$unlock()
#
## Below is an example to define the print function
# LicensesOrderServiceCategories509$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LicensesOrderServiceCategories509$lock()

