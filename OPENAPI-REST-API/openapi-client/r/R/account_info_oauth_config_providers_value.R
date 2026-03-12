#' Create a new AccountInfoOauthConfigProvidersValue
#'
#' @description
#' AccountInfoOauthConfigProvidersValue Class
#'
#' @docType class
#' @title AccountInfoOauthConfigProvidersValue
#' @description AccountInfoOauthConfigProvidersValue Class
#' @format An \code{R6Class} generator object
#' @field enabled  character [optional]
#' @field linked  character [optional]
#' @field account  character [optional]
#' @field url  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountInfoOauthConfigProvidersValue <- R6::R6Class(
  "AccountInfoOauthConfigProvidersValue",
  public = list(
    `enabled` = NULL,
    `linked` = NULL,
    `account` = NULL,
    `url` = NULL,

    #' @description
    #' Initialize a new AccountInfoOauthConfigProvidersValue class.
    #'
    #' @param enabled enabled
    #' @param linked linked
    #' @param account account
    #' @param url url
    #' @param ... Other optional arguments.
    initialize = function(`enabled` = NULL, `linked` = NULL, `account` = NULL, `url` = NULL, ...) {
      if (!is.null(`enabled`)) {
        if (!(is.logical(`enabled`) && length(`enabled`) == 1)) {
          stop(paste("Error! Invalid data for `enabled`. Must be a boolean:", `enabled`))
        }
        self$`enabled` <- `enabled`
      }
      if (!is.null(`linked`)) {
        if (!(is.logical(`linked`) && length(`linked`) == 1)) {
          stop(paste("Error! Invalid data for `linked`. Must be a boolean:", `linked`))
        }
        self$`linked` <- `linked`
      }
      if (!is.null(`account`)) {
        if (!(is.character(`account`) && length(`account`) == 1)) {
          stop(paste("Error! Invalid data for `account`. Must be a string:", `account`))
        }
        self$`account` <- `account`
      }
      if (!is.null(`url`)) {
        if (!(is.character(`url`) && length(`url`) == 1)) {
          stop(paste("Error! Invalid data for `url`. Must be a string:", `url`))
        }
        self$`url` <- `url`
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
    #' @return AccountInfoOauthConfigProvidersValue as a base R list.
    #' @examples
    #' # convert array of AccountInfoOauthConfigProvidersValue (x) to a data frame
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
    #' Convert AccountInfoOauthConfigProvidersValue to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountInfoOauthConfigProvidersValueObject <- list()
      if (!is.null(self$`enabled`)) {
        AccountInfoOauthConfigProvidersValueObject[["enabled"]] <-
          self$`enabled`
      }
      if (!is.null(self$`linked`)) {
        AccountInfoOauthConfigProvidersValueObject[["linked"]] <-
          self$`linked`
      }
      if (!is.null(self$`account`)) {
        AccountInfoOauthConfigProvidersValueObject[["account"]] <-
          self$`account`
      }
      if (!is.null(self$`url`)) {
        AccountInfoOauthConfigProvidersValueObject[["url"]] <-
          self$`url`
      }
      return(AccountInfoOauthConfigProvidersValueObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoOauthConfigProvidersValue
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoOauthConfigProvidersValue
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`enabled`)) {
        self$`enabled` <- this_object$`enabled`
      }
      if (!is.null(this_object$`linked`)) {
        self$`linked` <- this_object$`linked`
      }
      if (!is.null(this_object$`account`)) {
        self$`account` <- this_object$`account`
      }
      if (!is.null(this_object$`url`)) {
        self$`url` <- this_object$`url`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountInfoOauthConfigProvidersValue in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoOauthConfigProvidersValue
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoOauthConfigProvidersValue
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`enabled` <- this_object$`enabled`
      self$`linked` <- this_object$`linked`
      self$`account` <- this_object$`account`
      self$`url` <- this_object$`url`
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountInfoOauthConfigProvidersValue and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountInfoOauthConfigProvidersValue
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
# AccountInfoOauthConfigProvidersValue$unlock()
#
## Below is an example to define the print function
# AccountInfoOauthConfigProvidersValue$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountInfoOauthConfigProvidersValue$lock()

