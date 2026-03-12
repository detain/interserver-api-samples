#' Create a new AccountFeatures
#'
#' @description
#' Account Features data.
#'
#' @docType class
#' @title AccountFeatures
#' @description AccountFeatures Class
#' @format An \code{R6Class} generator object
#' @field disable_reset  integer [optional]
#' @field disable_reinstall  integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountFeatures <- R6::R6Class(
  "AccountFeatures",
  public = list(
    `disable_reset` = NULL,
    `disable_reinstall` = NULL,

    #' @description
    #' Initialize a new AccountFeatures class.
    #'
    #' @param disable_reset disable_reset
    #' @param disable_reinstall disable_reinstall
    #' @param ... Other optional arguments.
    initialize = function(`disable_reset` = NULL, `disable_reinstall` = NULL, ...) {
      if (!is.null(`disable_reset`)) {
        if (!(is.numeric(`disable_reset`) && length(`disable_reset`) == 1)) {
          stop(paste("Error! Invalid data for `disable_reset`. Must be an integer:", `disable_reset`))
        }
        self$`disable_reset` <- `disable_reset`
      }
      if (!is.null(`disable_reinstall`)) {
        if (!(is.numeric(`disable_reinstall`) && length(`disable_reinstall`) == 1)) {
          stop(paste("Error! Invalid data for `disable_reinstall`. Must be an integer:", `disable_reinstall`))
        }
        self$`disable_reinstall` <- `disable_reinstall`
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
    #' @return AccountFeatures as a base R list.
    #' @examples
    #' # convert array of AccountFeatures (x) to a data frame
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
    #' Convert AccountFeatures to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountFeaturesObject <- list()
      if (!is.null(self$`disable_reset`)) {
        AccountFeaturesObject[["disable_reset"]] <-
          self$`disable_reset`
      }
      if (!is.null(self$`disable_reinstall`)) {
        AccountFeaturesObject[["disable_reinstall"]] <-
          self$`disable_reinstall`
      }
      return(AccountFeaturesObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountFeatures
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountFeatures
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`disable_reset`)) {
        self$`disable_reset` <- this_object$`disable_reset`
      }
      if (!is.null(this_object$`disable_reinstall`)) {
        self$`disable_reinstall` <- this_object$`disable_reinstall`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountFeatures in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountFeatures
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountFeatures
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`disable_reset` <- this_object$`disable_reset`
      self$`disable_reinstall` <- this_object$`disable_reinstall`
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountFeatures and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountFeatures
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
# AccountFeatures$unlock()
#
## Below is an example to define the print function
# AccountFeatures$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountFeatures$lock()

