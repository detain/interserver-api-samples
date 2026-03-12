#' Create a new SendMail
#'
#' @description
#' Details for an Email
#'
#' @docType class
#' @title SendMail
#' @description SendMail Class
#' @format An \code{R6Class} generator object
#' @field to The Contact whom is the primary recipient of this email. character
#' @field from The contact whom is the this email is from. character
#' @field subject The subject or title of the email character
#' @field body The main email contents. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
SendMail <- R6::R6Class(
  "SendMail",
  public = list(
    `to` = NULL,
    `from` = NULL,
    `subject` = NULL,
    `body` = NULL,

    #' @description
    #' Initialize a new SendMail class.
    #'
    #' @param to The Contact whom is the primary recipient of this email.
    #' @param from The contact whom is the this email is from.
    #' @param subject The subject or title of the email
    #' @param body The main email contents.
    #' @param ... Other optional arguments.
    initialize = function(`to`, `from`, `subject`, `body`, ...) {
      if (!missing(`to`)) {
        if (!(is.character(`to`) && length(`to`) == 1)) {
          stop(paste("Error! Invalid data for `to`. Must be a string:", `to`))
        }
        self$`to` <- `to`
      }
      if (!missing(`from`)) {
        if (!(is.character(`from`) && length(`from`) == 1)) {
          stop(paste("Error! Invalid data for `from`. Must be a string:", `from`))
        }
        self$`from` <- `from`
      }
      if (!missing(`subject`)) {
        if (!(is.character(`subject`) && length(`subject`) == 1)) {
          stop(paste("Error! Invalid data for `subject`. Must be a string:", `subject`))
        }
        self$`subject` <- `subject`
      }
      if (!missing(`body`)) {
        if (!(is.character(`body`) && length(`body`) == 1)) {
          stop(paste("Error! Invalid data for `body`. Must be a string:", `body`))
        }
        self$`body` <- `body`
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
    #' @return SendMail as a base R list.
    #' @examples
    #' # convert array of SendMail (x) to a data frame
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
    #' Convert SendMail to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      SendMailObject <- list()
      if (!is.null(self$`to`)) {
        SendMailObject[["to"]] <-
          self$`to`
      }
      if (!is.null(self$`from`)) {
        SendMailObject[["from"]] <-
          self$`from`
      }
      if (!is.null(self$`subject`)) {
        SendMailObject[["subject"]] <-
          self$`subject`
      }
      if (!is.null(self$`body`)) {
        SendMailObject[["body"]] <-
          self$`body`
      }
      return(SendMailObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of SendMail
    #'
    #' @param input_json the JSON input
    #' @return the instance of SendMail
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`to`)) {
        self$`to` <- this_object$`to`
      }
      if (!is.null(this_object$`from`)) {
        self$`from` <- this_object$`from`
      }
      if (!is.null(this_object$`subject`)) {
        self$`subject` <- this_object$`subject`
      }
      if (!is.null(this_object$`body`)) {
        self$`body` <- this_object$`body`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return SendMail in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of SendMail
    #'
    #' @param input_json the JSON input
    #' @return the instance of SendMail
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`to` <- this_object$`to`
      self$`from` <- this_object$`from`
      self$`subject` <- this_object$`subject`
      self$`body` <- this_object$`body`
      self
    },

    #' @description
    #' Validate JSON input with respect to SendMail and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `to`
      if (!is.null(input_json$`to`)) {
        if (!(is.character(input_json$`to`) && length(input_json$`to`) == 1)) {
          stop(paste("Error! Invalid data for `to`. Must be a string:", input_json$`to`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for SendMail: the required field `to` is missing."))
      }
      # check the required field `from`
      if (!is.null(input_json$`from`)) {
        if (!(is.character(input_json$`from`) && length(input_json$`from`) == 1)) {
          stop(paste("Error! Invalid data for `from`. Must be a string:", input_json$`from`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for SendMail: the required field `from` is missing."))
      }
      # check the required field `subject`
      if (!is.null(input_json$`subject`)) {
        if (!(is.character(input_json$`subject`) && length(input_json$`subject`) == 1)) {
          stop(paste("Error! Invalid data for `subject`. Must be a string:", input_json$`subject`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for SendMail: the required field `subject` is missing."))
      }
      # check the required field `body`
      if (!is.null(input_json$`body`)) {
        if (!(is.character(input_json$`body`) && length(input_json$`body`) == 1)) {
          stop(paste("Error! Invalid data for `body`. Must be a string:", input_json$`body`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for SendMail: the required field `body` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of SendMail
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `to` is null
      if (is.null(self$`to`)) {
        return(FALSE)
      }

      # check if the required `from` is null
      if (is.null(self$`from`)) {
        return(FALSE)
      }

      # check if the required `subject` is null
      if (is.null(self$`subject`)) {
        return(FALSE)
      }

      # check if the required `body` is null
      if (is.null(self$`body`)) {
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
      # check if the required `to` is null
      if (is.null(self$`to`)) {
        invalid_fields["to"] <- "Non-nullable required field `to` cannot be null."
      }

      # check if the required `from` is null
      if (is.null(self$`from`)) {
        invalid_fields["from"] <- "Non-nullable required field `from` cannot be null."
      }

      # check if the required `subject` is null
      if (is.null(self$`subject`)) {
        invalid_fields["subject"] <- "Non-nullable required field `subject` cannot be null."
      }

      # check if the required `body` is null
      if (is.null(self$`body`)) {
        invalid_fields["body"] <- "Non-nullable required field `body` cannot be null."
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
# SendMail$unlock()
#
## Below is an example to define the print function
# SendMail$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# SendMail$lock()

