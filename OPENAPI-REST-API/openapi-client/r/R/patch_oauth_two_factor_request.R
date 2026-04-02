#' Create a new PatchOauthTwoFactorRequest
#'
#' @description
#' PatchOauthTwoFactorRequest Class
#'
#' @docType class
#' @title PatchOauthTwoFactorRequest
#' @description PatchOauthTwoFactorRequest Class
#' @format An \code{R6Class} generator object
#' @field account_id The account ID returned from the POST callback. integer
#' @field code The 6-digit two-factor authentication code. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PatchOauthTwoFactorRequest <- R6::R6Class(
  "PatchOauthTwoFactorRequest",
  public = list(
    `account_id` = NULL,
    `code` = NULL,

    #' @description
    #' Initialize a new PatchOauthTwoFactorRequest class.
    #'
    #' @param account_id The account ID returned from the POST callback.
    #' @param code The 6-digit two-factor authentication code.
    #' @param ... Other optional arguments.
    initialize = function(`account_id`, `code`, ...) {
      if (!missing(`account_id`)) {
        if (!(is.numeric(`account_id`) && length(`account_id`) == 1)) {
          stop(paste("Error! Invalid data for `account_id`. Must be an integer:", `account_id`))
        }
        self$`account_id` <- `account_id`
      }
      if (!missing(`code`)) {
        if (!(is.character(`code`) && length(`code`) == 1)) {
          stop(paste("Error! Invalid data for `code`. Must be a string:", `code`))
        }
        self$`code` <- `code`
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
    #' @return PatchOauthTwoFactorRequest as a base R list.
    #' @examples
    #' # convert array of PatchOauthTwoFactorRequest (x) to a data frame
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
    #' Convert PatchOauthTwoFactorRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      PatchOauthTwoFactorRequestObject <- list()
      if (!is.null(self$`account_id`)) {
        PatchOauthTwoFactorRequestObject[["account_id"]] <-
          self$`account_id`
      }
      if (!is.null(self$`code`)) {
        PatchOauthTwoFactorRequestObject[["code"]] <-
          self$`code`
      }
      return(PatchOauthTwoFactorRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of PatchOauthTwoFactorRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of PatchOauthTwoFactorRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`account_id`)) {
        self$`account_id` <- this_object$`account_id`
      }
      if (!is.null(this_object$`code`)) {
        self$`code` <- this_object$`code`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return PatchOauthTwoFactorRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of PatchOauthTwoFactorRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of PatchOauthTwoFactorRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`account_id` <- this_object$`account_id`
      self$`code` <- this_object$`code`
      self
    },

    #' @description
    #' Validate JSON input with respect to PatchOauthTwoFactorRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `account_id`
      if (!is.null(input_json$`account_id`)) {
        if (!(is.numeric(input_json$`account_id`) && length(input_json$`account_id`) == 1)) {
          stop(paste("Error! Invalid data for `account_id`. Must be an integer:", input_json$`account_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for PatchOauthTwoFactorRequest: the required field `account_id` is missing."))
      }
      # check the required field `code`
      if (!is.null(input_json$`code`)) {
        if (!(is.character(input_json$`code`) && length(input_json$`code`) == 1)) {
          stop(paste("Error! Invalid data for `code`. Must be a string:", input_json$`code`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for PatchOauthTwoFactorRequest: the required field `code` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of PatchOauthTwoFactorRequest
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `account_id` is null
      if (is.null(self$`account_id`)) {
        return(FALSE)
      }

      # check if the required `code` is null
      if (is.null(self$`code`)) {
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
      # check if the required `account_id` is null
      if (is.null(self$`account_id`)) {
        invalid_fields["account_id"] <- "Non-nullable required field `account_id` cannot be null."
      }

      # check if the required `code` is null
      if (is.null(self$`code`)) {
        invalid_fields["code"] <- "Non-nullable required field `code` cannot be null."
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
# PatchOauthTwoFactorRequest$unlock()
#
## Below is an example to define the print function
# PatchOauthTwoFactorRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# PatchOauthTwoFactorRequest$lock()

