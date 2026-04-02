#' Create a new DnsRecord
#'
#' @description
#' A single DNS Record row for a Domain
#'
#' @docType class
#' @title DnsRecord
#' @description DnsRecord Class
#' @format An \code{R6Class} generator object
#' @field id The ID of the DNS Record. character
#' @field domain_id The ID of the Domain this is a record of. character
#' @field name  character
#' @field type  \link{DnsRecordType}
#' @field content The content of the record, such as the IP address or hsotname. character
#' @field ttl Time To Live (seconds) character
#' @field prio Priority character
#' @field disabled  character
#' @field ordername Alternate name to use for sorting character
#' @field auth  character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DnsRecord <- R6::R6Class(
  "DnsRecord",
  public = list(
    `id` = NULL,
    `domain_id` = NULL,
    `name` = NULL,
    `type` = NULL,
    `content` = NULL,
    `ttl` = NULL,
    `prio` = NULL,
    `disabled` = NULL,
    `ordername` = NULL,
    `auth` = NULL,

    #' @description
    #' Initialize a new DnsRecord class.
    #'
    #' @param id The ID of the DNS Record.
    #' @param domain_id The ID of the Domain this is a record of.
    #' @param name name
    #' @param type type
    #' @param content The content of the record, such as the IP address or hsotname.
    #' @param ttl Time To Live (seconds)
    #' @param prio Priority
    #' @param disabled disabled
    #' @param ordername Alternate name to use for sorting
    #' @param auth auth
    #' @param ... Other optional arguments.
    initialize = function(`id`, `domain_id`, `name`, `type`, `content`, `ttl`, `prio`, `disabled`, `ordername`, `auth`, ...) {
      if (!missing(`id`)) {
        if (!(is.character(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", `id`))
        }
        self$`id` <- `id`
      }
      if (!missing(`domain_id`)) {
        if (!(is.character(`domain_id`) && length(`domain_id`) == 1)) {
          stop(paste("Error! Invalid data for `domain_id`. Must be a string:", `domain_id`))
        }
        self$`domain_id` <- `domain_id`
      }
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
      if (!missing(`ttl`)) {
        if (!(is.character(`ttl`) && length(`ttl`) == 1)) {
          stop(paste("Error! Invalid data for `ttl`. Must be a string:", `ttl`))
        }
        self$`ttl` <- `ttl`
      }
      if (!missing(`prio`)) {
        if (!(is.character(`prio`) && length(`prio`) == 1)) {
          stop(paste("Error! Invalid data for `prio`. Must be a string:", `prio`))
        }
        self$`prio` <- `prio`
      }
      if (!missing(`disabled`)) {
        if (!(is.character(`disabled`) && length(`disabled`) == 1)) {
          stop(paste("Error! Invalid data for `disabled`. Must be a string:", `disabled`))
        }
        self$`disabled` <- `disabled`
      }
      if (!missing(`ordername`)) {
        if (!(is.character(`ordername`) && length(`ordername`) == 1)) {
          stop(paste("Error! Invalid data for `ordername`. Must be a string:", `ordername`))
        }
        self$`ordername` <- `ordername`
      }
      if (!missing(`auth`)) {
        if (!(is.character(`auth`) && length(`auth`) == 1)) {
          stop(paste("Error! Invalid data for `auth`. Must be a string:", `auth`))
        }
        self$`auth` <- `auth`
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
    #' @return DnsRecord as a base R list.
    #' @examples
    #' # convert array of DnsRecord (x) to a data frame
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
    #' Convert DnsRecord to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DnsRecordObject <- list()
      if (!is.null(self$`id`)) {
        DnsRecordObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`domain_id`)) {
        DnsRecordObject[["domain_id"]] <-
          self$`domain_id`
      }
      if (!is.null(self$`name`)) {
        DnsRecordObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`type`)) {
        DnsRecordObject[["type"]] <-
          self$extractSimpleType(self$`type`)
      }
      if (!is.null(self$`content`)) {
        DnsRecordObject[["content"]] <-
          self$`content`
      }
      if (!is.null(self$`ttl`)) {
        DnsRecordObject[["ttl"]] <-
          self$`ttl`
      }
      if (!is.null(self$`prio`)) {
        DnsRecordObject[["prio"]] <-
          self$`prio`
      }
      if (!is.null(self$`disabled`)) {
        DnsRecordObject[["disabled"]] <-
          self$`disabled`
      }
      if (!is.null(self$`ordername`)) {
        DnsRecordObject[["ordername"]] <-
          self$`ordername`
      }
      if (!is.null(self$`auth`)) {
        DnsRecordObject[["auth"]] <-
          self$`auth`
      }
      return(DnsRecordObject)
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
    #' Deserialize JSON string into an instance of DnsRecord
    #'
    #' @param input_json the JSON input
    #' @return the instance of DnsRecord
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`domain_id`)) {
        self$`domain_id` <- this_object$`domain_id`
      }
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
      if (!is.null(this_object$`disabled`)) {
        self$`disabled` <- this_object$`disabled`
      }
      if (!is.null(this_object$`ordername`)) {
        self$`ordername` <- this_object$`ordername`
      }
      if (!is.null(this_object$`auth`)) {
        self$`auth` <- this_object$`auth`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DnsRecord in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DnsRecord
    #'
    #' @param input_json the JSON input
    #' @return the instance of DnsRecord
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`domain_id` <- this_object$`domain_id`
      self$`name` <- this_object$`name`
      self$`type` <- DnsRecordType$new()$fromJSON(jsonlite::toJSON(this_object$`type`, auto_unbox = TRUE, digits = NA))
      self$`content` <- this_object$`content`
      self$`ttl` <- this_object$`ttl`
      self$`prio` <- this_object$`prio`
      self$`disabled` <- this_object$`disabled`
      self$`ordername` <- this_object$`ordername`
      self$`auth` <- this_object$`auth`
      self
    },

    #' @description
    #' Validate JSON input with respect to DnsRecord and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `id`
      if (!is.null(input_json$`id`)) {
        if (!(is.character(input_json$`id`) && length(input_json$`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", input_json$`id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsRecord: the required field `id` is missing."))
      }
      # check the required field `domain_id`
      if (!is.null(input_json$`domain_id`)) {
        if (!(is.character(input_json$`domain_id`) && length(input_json$`domain_id`) == 1)) {
          stop(paste("Error! Invalid data for `domain_id`. Must be a string:", input_json$`domain_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsRecord: the required field `domain_id` is missing."))
      }
      # check the required field `name`
      if (!is.null(input_json$`name`)) {
        if (!(is.character(input_json$`name`) && length(input_json$`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", input_json$`name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsRecord: the required field `name` is missing."))
      }
      # check the required field `type`
      if (!is.null(input_json$`type`)) {
        stopifnot(R6::is.R6(input_json$`type`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsRecord: the required field `type` is missing."))
      }
      # check the required field `content`
      if (!is.null(input_json$`content`)) {
        if (!(is.character(input_json$`content`) && length(input_json$`content`) == 1)) {
          stop(paste("Error! Invalid data for `content`. Must be a string:", input_json$`content`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsRecord: the required field `content` is missing."))
      }
      # check the required field `ttl`
      if (!is.null(input_json$`ttl`)) {
        if (!(is.character(input_json$`ttl`) && length(input_json$`ttl`) == 1)) {
          stop(paste("Error! Invalid data for `ttl`. Must be a string:", input_json$`ttl`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsRecord: the required field `ttl` is missing."))
      }
      # check the required field `prio`
      if (!is.null(input_json$`prio`)) {
        if (!(is.character(input_json$`prio`) && length(input_json$`prio`) == 1)) {
          stop(paste("Error! Invalid data for `prio`. Must be a string:", input_json$`prio`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsRecord: the required field `prio` is missing."))
      }
      # check the required field `disabled`
      if (!is.null(input_json$`disabled`)) {
        if (!(is.character(input_json$`disabled`) && length(input_json$`disabled`) == 1)) {
          stop(paste("Error! Invalid data for `disabled`. Must be a string:", input_json$`disabled`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsRecord: the required field `disabled` is missing."))
      }
      # check the required field `ordername`
      if (!is.null(input_json$`ordername`)) {
        if (!(is.character(input_json$`ordername`) && length(input_json$`ordername`) == 1)) {
          stop(paste("Error! Invalid data for `ordername`. Must be a string:", input_json$`ordername`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsRecord: the required field `ordername` is missing."))
      }
      # check the required field `auth`
      if (!is.null(input_json$`auth`)) {
        if (!(is.character(input_json$`auth`) && length(input_json$`auth`) == 1)) {
          stop(paste("Error! Invalid data for `auth`. Must be a string:", input_json$`auth`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsRecord: the required field `auth` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DnsRecord
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `id` is null
      if (is.null(self$`id`)) {
        return(FALSE)
      }

      # check if the required `domain_id` is null
      if (is.null(self$`domain_id`)) {
        return(FALSE)
      }

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

      # check if the required `ttl` is null
      if (is.null(self$`ttl`)) {
        return(FALSE)
      }

      # check if the required `prio` is null
      if (is.null(self$`prio`)) {
        return(FALSE)
      }

      # check if the required `disabled` is null
      if (is.null(self$`disabled`)) {
        return(FALSE)
      }

      # check if the required `ordername` is null
      if (is.null(self$`ordername`)) {
        return(FALSE)
      }

      # check if the required `auth` is null
      if (is.null(self$`auth`)) {
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
      # check if the required `id` is null
      if (is.null(self$`id`)) {
        invalid_fields["id"] <- "Non-nullable required field `id` cannot be null."
      }

      # check if the required `domain_id` is null
      if (is.null(self$`domain_id`)) {
        invalid_fields["domain_id"] <- "Non-nullable required field `domain_id` cannot be null."
      }

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

      # check if the required `ttl` is null
      if (is.null(self$`ttl`)) {
        invalid_fields["ttl"] <- "Non-nullable required field `ttl` cannot be null."
      }

      # check if the required `prio` is null
      if (is.null(self$`prio`)) {
        invalid_fields["prio"] <- "Non-nullable required field `prio` cannot be null."
      }

      # check if the required `disabled` is null
      if (is.null(self$`disabled`)) {
        invalid_fields["disabled"] <- "Non-nullable required field `disabled` cannot be null."
      }

      # check if the required `ordername` is null
      if (is.null(self$`ordername`)) {
        invalid_fields["ordername"] <- "Non-nullable required field `ordername` cannot be null."
      }

      # check if the required `auth` is null
      if (is.null(self$`auth`)) {
        invalid_fields["auth"] <- "Non-nullable required field `auth` cannot be null."
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
# DnsRecord$unlock()
#
## Below is an example to define the print function
# DnsRecord$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DnsRecord$lock()

