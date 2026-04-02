#' Create a new MailBlockClickHouse
#'
#' @description
#' A block entry from the clickhouse mailblocks server.
#'
#' @docType class
#' @title MailBlockClickHouse
#' @description MailBlockClickHouse Class
#' @format An \code{R6Class} generator object
#' @field date  character
#' @field from  character
#' @field messageId  character
#' @field subject  character
#' @field to  character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailBlockClickHouse <- R6::R6Class(
  "MailBlockClickHouse",
  public = list(
    `date` = NULL,
    `from` = NULL,
    `messageId` = NULL,
    `subject` = NULL,
    `to` = NULL,

    #' @description
    #' Initialize a new MailBlockClickHouse class.
    #'
    #' @param date date
    #' @param from from
    #' @param messageId messageId
    #' @param subject subject
    #' @param to to
    #' @param ... Other optional arguments.
    initialize = function(`date`, `from`, `messageId`, `subject`, `to`, ...) {
      if (!missing(`date`)) {
        if (!(is.character(`date`) && length(`date`) == 1)) {
          stop(paste("Error! Invalid data for `date`. Must be a string:", `date`))
        }
        self$`date` <- `date`
      }
      if (!missing(`from`)) {
        if (!(is.character(`from`) && length(`from`) == 1)) {
          stop(paste("Error! Invalid data for `from`. Must be a string:", `from`))
        }
        self$`from` <- `from`
      }
      if (!missing(`messageId`)) {
        if (!(is.character(`messageId`) && length(`messageId`) == 1)) {
          stop(paste("Error! Invalid data for `messageId`. Must be a string:", `messageId`))
        }
        self$`messageId` <- `messageId`
      }
      if (!missing(`subject`)) {
        if (!(is.character(`subject`) && length(`subject`) == 1)) {
          stop(paste("Error! Invalid data for `subject`. Must be a string:", `subject`))
        }
        self$`subject` <- `subject`
      }
      if (!missing(`to`)) {
        if (!(is.character(`to`) && length(`to`) == 1)) {
          stop(paste("Error! Invalid data for `to`. Must be a string:", `to`))
        }
        self$`to` <- `to`
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
    #' @return MailBlockClickHouse as a base R list.
    #' @examples
    #' # convert array of MailBlockClickHouse (x) to a data frame
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
    #' Convert MailBlockClickHouse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailBlockClickHouseObject <- list()
      if (!is.null(self$`date`)) {
        MailBlockClickHouseObject[["date"]] <-
          self$`date`
      }
      if (!is.null(self$`from`)) {
        MailBlockClickHouseObject[["from"]] <-
          self$`from`
      }
      if (!is.null(self$`messageId`)) {
        MailBlockClickHouseObject[["messageId"]] <-
          self$`messageId`
      }
      if (!is.null(self$`subject`)) {
        MailBlockClickHouseObject[["subject"]] <-
          self$`subject`
      }
      if (!is.null(self$`to`)) {
        MailBlockClickHouseObject[["to"]] <-
          self$`to`
      }
      return(MailBlockClickHouseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailBlockClickHouse
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailBlockClickHouse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`date`)) {
        self$`date` <- this_object$`date`
      }
      if (!is.null(this_object$`from`)) {
        self$`from` <- this_object$`from`
      }
      if (!is.null(this_object$`messageId`)) {
        self$`messageId` <- this_object$`messageId`
      }
      if (!is.null(this_object$`subject`)) {
        self$`subject` <- this_object$`subject`
      }
      if (!is.null(this_object$`to`)) {
        self$`to` <- this_object$`to`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailBlockClickHouse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailBlockClickHouse
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailBlockClickHouse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`date` <- this_object$`date`
      self$`from` <- this_object$`from`
      self$`messageId` <- this_object$`messageId`
      self$`subject` <- this_object$`subject`
      self$`to` <- this_object$`to`
      self
    },

    #' @description
    #' Validate JSON input with respect to MailBlockClickHouse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `date`
      if (!is.null(input_json$`date`)) {
        if (!(is.character(input_json$`date`) && length(input_json$`date`) == 1)) {
          stop(paste("Error! Invalid data for `date`. Must be a string:", input_json$`date`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailBlockClickHouse: the required field `date` is missing."))
      }
      # check the required field `from`
      if (!is.null(input_json$`from`)) {
        if (!(is.character(input_json$`from`) && length(input_json$`from`) == 1)) {
          stop(paste("Error! Invalid data for `from`. Must be a string:", input_json$`from`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailBlockClickHouse: the required field `from` is missing."))
      }
      # check the required field `messageId`
      if (!is.null(input_json$`messageId`)) {
        if (!(is.character(input_json$`messageId`) && length(input_json$`messageId`) == 1)) {
          stop(paste("Error! Invalid data for `messageId`. Must be a string:", input_json$`messageId`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailBlockClickHouse: the required field `messageId` is missing."))
      }
      # check the required field `subject`
      if (!is.null(input_json$`subject`)) {
        if (!(is.character(input_json$`subject`) && length(input_json$`subject`) == 1)) {
          stop(paste("Error! Invalid data for `subject`. Must be a string:", input_json$`subject`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailBlockClickHouse: the required field `subject` is missing."))
      }
      # check the required field `to`
      if (!is.null(input_json$`to`)) {
        if (!(is.character(input_json$`to`) && length(input_json$`to`) == 1)) {
          stop(paste("Error! Invalid data for `to`. Must be a string:", input_json$`to`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailBlockClickHouse: the required field `to` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailBlockClickHouse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `date` is null
      if (is.null(self$`date`)) {
        return(FALSE)
      }

      # check if the required `from` is null
      if (is.null(self$`from`)) {
        return(FALSE)
      }

      # check if the required `messageId` is null
      if (is.null(self$`messageId`)) {
        return(FALSE)
      }

      # check if the required `subject` is null
      if (is.null(self$`subject`)) {
        return(FALSE)
      }

      # check if the required `to` is null
      if (is.null(self$`to`)) {
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
      # check if the required `date` is null
      if (is.null(self$`date`)) {
        invalid_fields["date"] <- "Non-nullable required field `date` cannot be null."
      }

      # check if the required `from` is null
      if (is.null(self$`from`)) {
        invalid_fields["from"] <- "Non-nullable required field `from` cannot be null."
      }

      # check if the required `messageId` is null
      if (is.null(self$`messageId`)) {
        invalid_fields["messageId"] <- "Non-nullable required field `messageId` cannot be null."
      }

      # check if the required `subject` is null
      if (is.null(self$`subject`)) {
        invalid_fields["subject"] <- "Non-nullable required field `subject` cannot be null."
      }

      # check if the required `to` is null
      if (is.null(self$`to`)) {
        invalid_fields["to"] <- "Non-nullable required field `to` cannot be null."
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
# MailBlockClickHouse$unlock()
#
## Below is an example to define the print function
# MailBlockClickHouse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailBlockClickHouse$lock()

