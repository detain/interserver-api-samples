#' Create a new PostOauthCallback200Response
#'
#' @description
#' PostOauthCallback200Response Class
#'
#' @docType class
#' @title PostOauthCallback200Response
#' @description PostOauthCallback200Response Class
#' @format An \code{R6Class} generator object
#' @field login Whether the user was logged in to an existing account. character [optional]
#' @field signup Whether a new account was created. character [optional]
#' @field linked Whether the OAuth provider was linked to an existing account. character [optional]
#' @field account_id The account ID associated with the OAuth login. integer [optional]
#' @field error_code Error code if additional verification is needed (e.g. `2fa_required`). character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PostOauthCallback200Response <- R6::R6Class(
  "PostOauthCallback200Response",
  public = list(
    `login` = NULL,
    `signup` = NULL,
    `linked` = NULL,
    `account_id` = NULL,
    `error_code` = NULL,

    #' @description
    #' Initialize a new PostOauthCallback200Response class.
    #'
    #' @param login Whether the user was logged in to an existing account.
    #' @param signup Whether a new account was created.
    #' @param linked Whether the OAuth provider was linked to an existing account.
    #' @param account_id The account ID associated with the OAuth login.
    #' @param error_code Error code if additional verification is needed (e.g. `2fa_required`).
    #' @param ... Other optional arguments.
    initialize = function(`login` = NULL, `signup` = NULL, `linked` = NULL, `account_id` = NULL, `error_code` = NULL, ...) {
      if (!is.null(`login`)) {
        if (!(is.logical(`login`) && length(`login`) == 1)) {
          stop(paste("Error! Invalid data for `login`. Must be a boolean:", `login`))
        }
        self$`login` <- `login`
      }
      if (!is.null(`signup`)) {
        if (!(is.logical(`signup`) && length(`signup`) == 1)) {
          stop(paste("Error! Invalid data for `signup`. Must be a boolean:", `signup`))
        }
        self$`signup` <- `signup`
      }
      if (!is.null(`linked`)) {
        if (!(is.logical(`linked`) && length(`linked`) == 1)) {
          stop(paste("Error! Invalid data for `linked`. Must be a boolean:", `linked`))
        }
        self$`linked` <- `linked`
      }
      if (!is.null(`account_id`)) {
        if (!(is.numeric(`account_id`) && length(`account_id`) == 1)) {
          stop(paste("Error! Invalid data for `account_id`. Must be an integer:", `account_id`))
        }
        self$`account_id` <- `account_id`
      }
      if (!is.null(`error_code`)) {
        if (!(is.character(`error_code`) && length(`error_code`) == 1)) {
          stop(paste("Error! Invalid data for `error_code`. Must be a string:", `error_code`))
        }
        self$`error_code` <- `error_code`
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
    #' @return PostOauthCallback200Response as a base R list.
    #' @examples
    #' # convert array of PostOauthCallback200Response (x) to a data frame
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
    #' Convert PostOauthCallback200Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      PostOauthCallback200ResponseObject <- list()
      if (!is.null(self$`login`)) {
        PostOauthCallback200ResponseObject[["login"]] <-
          self$`login`
      }
      if (!is.null(self$`signup`)) {
        PostOauthCallback200ResponseObject[["signup"]] <-
          self$`signup`
      }
      if (!is.null(self$`linked`)) {
        PostOauthCallback200ResponseObject[["linked"]] <-
          self$`linked`
      }
      if (!is.null(self$`account_id`)) {
        PostOauthCallback200ResponseObject[["account_id"]] <-
          self$`account_id`
      }
      if (!is.null(self$`error_code`)) {
        PostOauthCallback200ResponseObject[["error_code"]] <-
          self$`error_code`
      }
      return(PostOauthCallback200ResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of PostOauthCallback200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of PostOauthCallback200Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`login`)) {
        self$`login` <- this_object$`login`
      }
      if (!is.null(this_object$`signup`)) {
        self$`signup` <- this_object$`signup`
      }
      if (!is.null(this_object$`linked`)) {
        self$`linked` <- this_object$`linked`
      }
      if (!is.null(this_object$`account_id`)) {
        self$`account_id` <- this_object$`account_id`
      }
      if (!is.null(this_object$`error_code`)) {
        self$`error_code` <- this_object$`error_code`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return PostOauthCallback200Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of PostOauthCallback200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of PostOauthCallback200Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`login` <- this_object$`login`
      self$`signup` <- this_object$`signup`
      self$`linked` <- this_object$`linked`
      self$`account_id` <- this_object$`account_id`
      self$`error_code` <- this_object$`error_code`
      self
    },

    #' @description
    #' Validate JSON input with respect to PostOauthCallback200Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of PostOauthCallback200Response
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
# PostOauthCallback200Response$unlock()
#
## Below is an example to define the print function
# PostOauthCallback200Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# PostOauthCallback200Response$lock()

