#' Create a new DnsNewRecord
#'
#' @description
#' Request data for a new DNS record.
#'
#' @docType class
#' @title DnsNewRecord
#' @description DnsNewRecord Class
#' @format An \code{R6Class} generator object
#' @field name Name part of record character
#' @field type  \link{DnsRecordType}
#' @field content Content of record character
#' @field ttl Time-to-live integer [optional]
#' @field prio Priority integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DnsNewRecord <- R6::R6Class(
  "DnsNewRecord",
  public = list(
    `name` = NULL,
    `type` = NULL,
    `content` = NULL,
    `ttl` = NULL,
    `prio` = NULL,

    #' @description
    #' Initialize a new DnsNewRecord class.
    #'
    #' @param name Name part of record
    #' @param type type
    #' @param content Content of record
    #' @param ttl Time-to-live. Default to 86400.
    #' @param prio Priority. Default to 0.
    #' @param ... Other optional arguments.
    initialize = function(`name`, `type`, `content`, `ttl` = 86400, `prio` = 0, ...) {
      if (!missing(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!missing(`type`)) {
        if (!(`type` %in% c())) {
          stop(paste("Error! \"", `type`, "\" cannot be assigned to `type`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`type`))
        self$`type` <- `type`
      }
      if (!missing(`content`)) {
        if (!(is.character(`content`) && length(`content`) == 1)) {
          stop(paste("Error! Invalid data for `content`. Must be a string:", `content`))
        }
        self$`content` <- `content`
      }
      if (!is.null(`ttl`)) {
        if (!(is.numeric(`ttl`) && length(`ttl`) == 1)) {
          stop(paste("Error! Invalid data for `ttl`. Must be an integer:", `ttl`))
        }
        self$`ttl` <- `ttl`
      }
      if (!is.null(`prio`)) {
        if (!(is.numeric(`prio`) && length(`prio`) == 1)) {
          stop(paste("Error! Invalid data for `prio`. Must be an integer:", `prio`))
        }
        self$`prio` <- `prio`
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
    #' @return DnsNewRecord as a base R list.
    #' @examples
    #' # convert array of DnsNewRecord (x) to a data frame
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
    #' Convert DnsNewRecord to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DnsNewRecordObject <- list()
      if (!is.null(self$`name`)) {
        DnsNewRecordObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`type`)) {
        DnsNewRecordObject[["type"]] <-
          self$extractSimpleType(self$`type`)
      }
      if (!is.null(self$`content`)) {
        DnsNewRecordObject[["content"]] <-
          self$`content`
      }
      if (!is.null(self$`ttl`)) {
        DnsNewRecordObject[["ttl"]] <-
          self$`ttl`
      }
      if (!is.null(self$`prio`)) {
        DnsNewRecordObject[["prio"]] <-
          self$`prio`
      }
      return(DnsNewRecordObject)
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
    #' Deserialize JSON string into an instance of DnsNewRecord
    #'
    #' @param input_json the JSON input
    #' @return the instance of DnsNewRecord
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`type`)) {
        `type_object` <- DnsRecordType$new()
        `type_object`$fromJSON(jsonlite::toJSON(this_object$`type`, auto_unbox = TRUE, digits = NA))
        self$`type` <- `type_object`
      }
      if (!is.null(this_object$`content`)) {
        self$`content` <- this_object$`content`
      }
      if (!is.null(this_object$`ttl`)) {
        self$`ttl` <- this_object$`ttl`
      }
      if (!is.null(this_object$`prio`)) {
        self$`prio` <- this_object$`prio`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DnsNewRecord in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DnsNewRecord
    #'
    #' @param input_json the JSON input
    #' @return the instance of DnsNewRecord
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`name` <- this_object$`name`
      self$`type` <- DnsRecordType$new()$fromJSON(jsonlite::toJSON(this_object$`type`, auto_unbox = TRUE, digits = NA))
      self$`content` <- this_object$`content`
      self$`ttl` <- this_object$`ttl`
      self$`prio` <- this_object$`prio`
      self
    },

    #' @description
    #' Validate JSON input with respect to DnsNewRecord and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `name`
      if (!is.null(input_json$`name`)) {
        if (!(is.character(input_json$`name`) && length(input_json$`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", input_json$`name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsNewRecord: the required field `name` is missing."))
      }
      # check the required field `type`
      if (!is.null(input_json$`type`)) {
        stopifnot(R6::is.R6(input_json$`type`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsNewRecord: the required field `type` is missing."))
      }
      # check the required field `content`
      if (!is.null(input_json$`content`)) {
        if (!(is.character(input_json$`content`) && length(input_json$`content`) == 1)) {
          stop(paste("Error! Invalid data for `content`. Must be a string:", input_json$`content`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsNewRecord: the required field `content` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DnsNewRecord
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `name` is null
      if (is.null(self$`name`)) {
        return(FALSE)
      }

      # check if the required `type` is null
      if (is.null(self$`type`)) {
        return(FALSE)
      }

      # check if the required `content` is null
      if (is.null(self$`content`)) {
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
      # check if the required `name` is null
      if (is.null(self$`name`)) {
        invalid_fields["name"] <- "Non-nullable required field `name` cannot be null."
      }

      # check if the required `type` is null
      if (is.null(self$`type`)) {
        invalid_fields["type"] <- "Non-nullable required field `type` cannot be null."
      }

      # check if the required `content` is null
      if (is.null(self$`content`)) {
        invalid_fields["content"] <- "Non-nullable required field `content` cannot be null."
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
# DnsNewRecord$unlock()
#
## Below is an example to define the print function
# DnsNewRecord$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DnsNewRecord$lock()

