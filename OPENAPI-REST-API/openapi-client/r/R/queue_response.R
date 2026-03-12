#' Create a new QueueResponse
#'
#' @description
#' Response after sending an action queue to a service.
#'
#' @docType class
#' @title QueueResponse
#' @description QueueResponse Class
#' @format An \code{R6Class} generator object
#' @field text Response text character
#' @field queueId The Queue ID attached to the action. integer
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QueueResponse <- R6::R6Class(
  "QueueResponse",
  public = list(
    `text` = NULL,
    `queueId` = NULL,

    #' @description
    #' Initialize a new QueueResponse class.
    #'
    #' @param text Response text
    #' @param queueId The Queue ID attached to the action.
    #' @param ... Other optional arguments.
    initialize = function(`text`, `queueId`, ...) {
      if (!missing(`text`)) {
        if (!(is.character(`text`) && length(`text`) == 1)) {
          stop(paste("Error! Invalid data for `text`. Must be a string:", `text`))
        }
        self$`text` <- `text`
      }
      if (!missing(`queueId`)) {
        if (!(is.numeric(`queueId`) && length(`queueId`) == 1)) {
          stop(paste("Error! Invalid data for `queueId`. Must be an integer:", `queueId`))
        }
        self$`queueId` <- `queueId`
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
    #' @return QueueResponse as a base R list.
    #' @examples
    #' # convert array of QueueResponse (x) to a data frame
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
    #' Convert QueueResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QueueResponseObject <- list()
      if (!is.null(self$`text`)) {
        QueueResponseObject[["text"]] <-
          self$`text`
      }
      if (!is.null(self$`queueId`)) {
        QueueResponseObject[["queueId"]] <-
          self$`queueId`
      }
      return(QueueResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of QueueResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of QueueResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`text`)) {
        self$`text` <- this_object$`text`
      }
      if (!is.null(this_object$`queueId`)) {
        self$`queueId` <- this_object$`queueId`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QueueResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QueueResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of QueueResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`text` <- this_object$`text`
      self$`queueId` <- this_object$`queueId`
      self
    },

    #' @description
    #' Validate JSON input with respect to QueueResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `text`
      if (!is.null(input_json$`text`)) {
        if (!(is.character(input_json$`text`) && length(input_json$`text`) == 1)) {
          stop(paste("Error! Invalid data for `text`. Must be a string:", input_json$`text`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for QueueResponse: the required field `text` is missing."))
      }
      # check the required field `queueId`
      if (!is.null(input_json$`queueId`)) {
        if (!(is.numeric(input_json$`queueId`) && length(input_json$`queueId`) == 1)) {
          stop(paste("Error! Invalid data for `queueId`. Must be an integer:", input_json$`queueId`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for QueueResponse: the required field `queueId` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QueueResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `text` is null
      if (is.null(self$`text`)) {
        return(FALSE)
      }

      # check if the required `queueId` is null
      if (is.null(self$`queueId`)) {
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
      # check if the required `text` is null
      if (is.null(self$`text`)) {
        invalid_fields["text"] <- "Non-nullable required field `text` cannot be null."
      }

      # check if the required `queueId` is null
      if (is.null(self$`queueId`)) {
        invalid_fields["queueId"] <- "Non-nullable required field `queueId` cannot be null."
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
# QueueResponse$unlock()
#
## Below is an example to define the print function
# QueueResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QueueResponse$lock()

