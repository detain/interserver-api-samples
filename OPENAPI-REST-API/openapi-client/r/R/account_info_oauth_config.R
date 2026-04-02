#' Create a new AccountInfoOauthConfig
#'
#' @description
#' OAuth integration configuration including callback URL and available providers.
#'
#' @docType class
#' @title AccountInfoOauthConfig
#' @description AccountInfoOauthConfig Class
#' @format An \code{R6Class} generator object
#' @field callback  character
#' @field providers  \link{AccountInfoOauthConfigProviders}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountInfoOauthConfig <- R6::R6Class(
  "AccountInfoOauthConfig",
  public = list(
    `callback` = NULL,
    `providers` = NULL,

    #' @description
    #' Initialize a new AccountInfoOauthConfig class.
    #'
    #' @param callback callback
    #' @param providers providers
    #' @param ... Other optional arguments.
    initialize = function(`callback`, `providers`, ...) {
      if (!missing(`callback`)) {
        if (!(is.character(`callback`) && length(`callback`) == 1)) {
          stop(paste("Error! Invalid data for `callback`. Must be a string:", `callback`))
        }
        self$`callback` <- `callback`
      }
      if (!missing(`providers`)) {
        stopifnot(R6::is.R6(`providers`))
        self$`providers` <- `providers`
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
    #' @return AccountInfoOauthConfig as a base R list.
    #' @examples
    #' # convert array of AccountInfoOauthConfig (x) to a data frame
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
    #' Convert AccountInfoOauthConfig to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountInfoOauthConfigObject <- list()
      if (!is.null(self$`callback`)) {
        AccountInfoOauthConfigObject[["callback"]] <-
          self$`callback`
      }
      if (!is.null(self$`providers`)) {
        AccountInfoOauthConfigObject[["providers"]] <-
          self$extractSimpleType(self$`providers`)
      }
      return(AccountInfoOauthConfigObject)
    },

    extractSimpleType = function(x) {
      if (R6::is.R6(x)) {
        return(x$toSimpleType())
      } else if (!self$hasNestedR6(x)) {
        return(x)
      }
      lapply(x, self$extractSimpleType)
    },

    hasNestedR6 = function(x) {
      if (R6::is.R6(x)) {
        return(TRUE)
      }
      if (is.list(x)) {
        for (item in x) {
          if (self$hasNestedR6(item)) {
            return(TRUE)
          }
        }
      }
      FALSE
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoOauthConfig
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoOauthConfig
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`callback`)) {
        self$`callback` <- this_object$`callback`
      }
      if (!is.null(this_object$`providers`)) {
        `providers_object` <- AccountInfoOauthConfigProviders$new()
        `providers_object`$fromJSON(jsonlite::toJSON(this_object$`providers`, auto_unbox = TRUE, digits = NA))
        self$`providers` <- `providers_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountInfoOauthConfig in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoOauthConfig
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoOauthConfig
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`callback` <- this_object$`callback`
      self$`providers` <- AccountInfoOauthConfigProviders$new()$fromJSON(jsonlite::toJSON(this_object$`providers`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountInfoOauthConfig and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `callback`
      if (!is.null(input_json$`callback`)) {
        if (!(is.character(input_json$`callback`) && length(input_json$`callback`) == 1)) {
          stop(paste("Error! Invalid data for `callback`. Must be a string:", input_json$`callback`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for AccountInfoOauthConfig: the required field `callback` is missing."))
      }
      # check the required field `providers`
      if (!is.null(input_json$`providers`)) {
        stopifnot(R6::is.R6(input_json$`providers`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for AccountInfoOauthConfig: the required field `providers` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountInfoOauthConfig
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `callback` is null
      if (is.null(self$`callback`)) {
        return(FALSE)
      }

      # check if the required `providers` is null
      if (is.null(self$`providers`)) {
        return(FALSE)
      }

      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `callback` is null
      if (is.null(self$`callback`)) {
        invalid_fields["callback"] <- "Non-nullable required field `callback` cannot be null."
      }

      # check if the required `providers` is null
      if (is.null(self$`providers`)) {
        invalid_fields["providers"] <- "Non-nullable required field `providers` cannot be null."
      }

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
# AccountInfoOauthConfig$unlock()
#
## Below is an example to define the print function
# AccountInfoOauthConfig$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountInfoOauthConfig$lock()

