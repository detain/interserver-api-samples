#' Create a new LoginSuccessResponse
#'
#' @description
#' The response from a successful login.
#'
#' @docType class
#' @title LoginSuccessResponse
#' @description LoginSuccessResponse Class
#' @format An \code{R6Class} generator object
#' @field sessionId  character [optional]
#' @field account_id  integer [optional]
#' @field account_lid  character [optional]
#' @field ima  character [optional]
#' @field gravatar  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LoginSuccessResponse <- R6::R6Class(
  "LoginSuccessResponse",
  public = list(
    `sessionId` = NULL,
    `account_id` = NULL,
    `account_lid` = NULL,
    `ima` = NULL,
    `gravatar` = NULL,

    #' @description
    #' Initialize a new LoginSuccessResponse class.
    #'
    #' @param sessionId sessionId
    #' @param account_id account_id
    #' @param account_lid account_lid
    #' @param ima ima
    #' @param gravatar gravatar
    #' @param ... Other optional arguments.
    initialize = function(`sessionId` = NULL, `account_id` = NULL, `account_lid` = NULL, `ima` = NULL, `gravatar` = NULL, ...) {
      if (!is.null(`sessionId`)) {
        if (!(is.character(`sessionId`) && length(`sessionId`) == 1)) {
          stop(paste("Error! Invalid data for `sessionId`. Must be a string:", `sessionId`))
        }
        self$`sessionId` <- `sessionId`
      }
      if (!is.null(`account_id`)) {
        if (!(is.numeric(`account_id`) && length(`account_id`) == 1)) {
          stop(paste("Error! Invalid data for `account_id`. Must be an integer:", `account_id`))
        }
        self$`account_id` <- `account_id`
      }
      if (!is.null(`account_lid`)) {
        if (!(is.character(`account_lid`) && length(`account_lid`) == 1)) {
          stop(paste("Error! Invalid data for `account_lid`. Must be a string:", `account_lid`))
        }
        self$`account_lid` <- `account_lid`
      }
      if (!is.null(`ima`)) {
        if (!(is.character(`ima`) && length(`ima`) == 1)) {
          stop(paste("Error! Invalid data for `ima`. Must be a string:", `ima`))
        }
        self$`ima` <- `ima`
      }
      if (!is.null(`gravatar`)) {
        if (!(is.character(`gravatar`) && length(`gravatar`) == 1)) {
          stop(paste("Error! Invalid data for `gravatar`. Must be a string:", `gravatar`))
        }
        self$`gravatar` <- `gravatar`
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
    #' @return LoginSuccessResponse as a base R list.
    #' @examples
    #' # convert array of LoginSuccessResponse (x) to a data frame
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
    #' Convert LoginSuccessResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LoginSuccessResponseObject <- list()
      if (!is.null(self$`sessionId`)) {
        LoginSuccessResponseObject[["sessionId"]] <-
          self$`sessionId`
      }
      if (!is.null(self$`account_id`)) {
        LoginSuccessResponseObject[["account_id"]] <-
          self$`account_id`
      }
      if (!is.null(self$`account_lid`)) {
        LoginSuccessResponseObject[["account_lid"]] <-
          self$`account_lid`
      }
      if (!is.null(self$`ima`)) {
        LoginSuccessResponseObject[["ima"]] <-
          self$`ima`
      }
      if (!is.null(self$`gravatar`)) {
        LoginSuccessResponseObject[["gravatar"]] <-
          self$`gravatar`
      }
      return(LoginSuccessResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of LoginSuccessResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginSuccessResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`sessionId`)) {
        self$`sessionId` <- this_object$`sessionId`
      }
      if (!is.null(this_object$`account_id`)) {
        self$`account_id` <- this_object$`account_id`
      }
      if (!is.null(this_object$`account_lid`)) {
        self$`account_lid` <- this_object$`account_lid`
      }
      if (!is.null(this_object$`ima`)) {
        self$`ima` <- this_object$`ima`
      }
      if (!is.null(this_object$`gravatar`)) {
        self$`gravatar` <- this_object$`gravatar`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LoginSuccessResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LoginSuccessResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginSuccessResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`sessionId` <- this_object$`sessionId`
      self$`account_id` <- this_object$`account_id`
      self$`account_lid` <- this_object$`account_lid`
      self$`ima` <- this_object$`ima`
      self$`gravatar` <- this_object$`gravatar`
      self
    },

    #' @description
    #' Validate JSON input with respect to LoginSuccessResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LoginSuccessResponse
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
# LoginSuccessResponse$unlock()
#
## Below is an example to define the print function
# LoginSuccessResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LoginSuccessResponse$lock()

