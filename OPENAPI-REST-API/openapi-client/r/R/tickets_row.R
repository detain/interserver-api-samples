#' Create a new TicketsRow
#'
#' @description
#' Information about a single ticket.
#'
#' @docType class
#' @title TicketsRow
#' @description TicketsRow Class
#' @format An \code{R6Class} generator object
#' @field title  character
#' @field ticketmaskid  character
#' @field lastreplier  character
#' @field status  character
#' @field priority  character
#' @field total_replies  integer
#' @field lastactivity  character
#' @field departmenttitle  character
#' @field ticketid  integer
#' @field can_close  character
#' @field attachments  \link{AnyType}
#' @field status_text  character
#' @field checked  character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
TicketsRow <- R6::R6Class(
  "TicketsRow",
  public = list(
    `title` = NULL,
    `ticketmaskid` = NULL,
    `lastreplier` = NULL,
    `status` = NULL,
    `priority` = NULL,
    `total_replies` = NULL,
    `lastactivity` = NULL,
    `departmenttitle` = NULL,
    `ticketid` = NULL,
    `can_close` = NULL,
    `attachments` = NULL,
    `status_text` = NULL,
    `checked` = NULL,

    #' @description
    #' Initialize a new TicketsRow class.
    #'
    #' @param title title
    #' @param ticketmaskid ticketmaskid
    #' @param lastreplier lastreplier
    #' @param status status
    #' @param priority priority
    #' @param total_replies total_replies
    #' @param lastactivity lastactivity
    #' @param departmenttitle departmenttitle
    #' @param ticketid ticketid
    #' @param can_close can_close
    #' @param attachments attachments
    #' @param status_text status_text
    #' @param checked checked
    #' @param ... Other optional arguments.
    initialize = function(`title`, `ticketmaskid`, `lastreplier`, `status`, `priority`, `total_replies`, `lastactivity`, `departmenttitle`, `ticketid`, `can_close`, `attachments`, `status_text`, `checked`, ...) {
      if (!missing(`title`)) {
        if (!(is.character(`title`) && length(`title`) == 1)) {
          stop(paste("Error! Invalid data for `title`. Must be a string:", `title`))
        }
        self$`title` <- `title`
      }
      if (!missing(`ticketmaskid`)) {
        if (!(is.character(`ticketmaskid`) && length(`ticketmaskid`) == 1)) {
          stop(paste("Error! Invalid data for `ticketmaskid`. Must be a string:", `ticketmaskid`))
        }
        self$`ticketmaskid` <- `ticketmaskid`
      }
      if (!missing(`lastreplier`)) {
        if (!(is.character(`lastreplier`) && length(`lastreplier`) == 1)) {
          stop(paste("Error! Invalid data for `lastreplier`. Must be a string:", `lastreplier`))
        }
        self$`lastreplier` <- `lastreplier`
      }
      if (!missing(`status`)) {
        if (!(is.character(`status`) && length(`status`) == 1)) {
          stop(paste("Error! Invalid data for `status`. Must be a string:", `status`))
        }
        self$`status` <- `status`
      }
      if (!missing(`priority`)) {
        if (!(is.character(`priority`) && length(`priority`) == 1)) {
          stop(paste("Error! Invalid data for `priority`. Must be a string:", `priority`))
        }
        self$`priority` <- `priority`
      }
      if (!missing(`total_replies`)) {
        if (!(is.numeric(`total_replies`) && length(`total_replies`) == 1)) {
          stop(paste("Error! Invalid data for `total_replies`. Must be an integer:", `total_replies`))
        }
        self$`total_replies` <- `total_replies`
      }
      if (!missing(`lastactivity`)) {
        if (!(is.character(`lastactivity`) && length(`lastactivity`) == 1)) {
          stop(paste("Error! Invalid data for `lastactivity`. Must be a string:", `lastactivity`))
        }
        self$`lastactivity` <- `lastactivity`
      }
      if (!missing(`departmenttitle`)) {
        if (!(is.character(`departmenttitle`) && length(`departmenttitle`) == 1)) {
          stop(paste("Error! Invalid data for `departmenttitle`. Must be a string:", `departmenttitle`))
        }
        self$`departmenttitle` <- `departmenttitle`
      }
      if (!missing(`ticketid`)) {
        if (!(is.numeric(`ticketid`) && length(`ticketid`) == 1)) {
          stop(paste("Error! Invalid data for `ticketid`. Must be an integer:", `ticketid`))
        }
        self$`ticketid` <- `ticketid`
      }
      if (!missing(`can_close`)) {
        if (!(is.character(`can_close`) && length(`can_close`) == 1)) {
          stop(paste("Error! Invalid data for `can_close`. Must be a string:", `can_close`))
        }
        self$`can_close` <- `can_close`
      }
      if (!missing(`attachments`)) {
        stopifnot(R6::is.R6(`attachments`))
        self$`attachments` <- `attachments`
      }
      if (!missing(`status_text`)) {
        if (!(is.character(`status_text`) && length(`status_text`) == 1)) {
          stop(paste("Error! Invalid data for `status_text`. Must be a string:", `status_text`))
        }
        self$`status_text` <- `status_text`
      }
      if (!missing(`checked`)) {
        if (!(is.logical(`checked`) && length(`checked`) == 1)) {
          stop(paste("Error! Invalid data for `checked`. Must be a boolean:", `checked`))
        }
        self$`checked` <- `checked`
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
    #' @return TicketsRow as a base R list.
    #' @examples
    #' # convert array of TicketsRow (x) to a data frame
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
    #' Convert TicketsRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      TicketsRowObject <- list()
      if (!is.null(self$`title`)) {
        TicketsRowObject[["title"]] <-
          self$`title`
      }
      if (!is.null(self$`ticketmaskid`)) {
        TicketsRowObject[["ticketmaskid"]] <-
          self$`ticketmaskid`
      }
      if (!is.null(self$`lastreplier`)) {
        TicketsRowObject[["lastreplier"]] <-
          self$`lastreplier`
      }
      if (!is.null(self$`status`)) {
        TicketsRowObject[["status"]] <-
          self$`status`
      }
      if (!is.null(self$`priority`)) {
        TicketsRowObject[["priority"]] <-
          self$`priority`
      }
      if (!is.null(self$`total_replies`)) {
        TicketsRowObject[["total_replies"]] <-
          self$`total_replies`
      }
      if (!is.null(self$`lastactivity`)) {
        TicketsRowObject[["lastactivity"]] <-
          self$`lastactivity`
      }
      if (!is.null(self$`departmenttitle`)) {
        TicketsRowObject[["departmenttitle"]] <-
          self$`departmenttitle`
      }
      if (!is.null(self$`ticketid`)) {
        TicketsRowObject[["ticketid"]] <-
          self$`ticketid`
      }
      if (!is.null(self$`can_close`)) {
        TicketsRowObject[["can_close"]] <-
          self$`can_close`
      }
      if (!is.null(self$`attachments`)) {
        TicketsRowObject[["attachments"]] <-
          self$extractSimpleType(self$`attachments`)
      }
      if (!is.null(self$`status_text`)) {
        TicketsRowObject[["status_text"]] <-
          self$`status_text`
      }
      if (!is.null(self$`checked`)) {
        TicketsRowObject[["checked"]] <-
          self$`checked`
      }
      return(TicketsRowObject)
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
    #' Deserialize JSON string into an instance of TicketsRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of TicketsRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`title`)) {
        self$`title` <- this_object$`title`
      }
      if (!is.null(this_object$`ticketmaskid`)) {
        self$`ticketmaskid` <- this_object$`ticketmaskid`
      }
      if (!is.null(this_object$`lastreplier`)) {
        self$`lastreplier` <- this_object$`lastreplier`
      }
      if (!is.null(this_object$`status`)) {
        self$`status` <- this_object$`status`
      }
      if (!is.null(this_object$`priority`)) {
        self$`priority` <- this_object$`priority`
      }
      if (!is.null(this_object$`total_replies`)) {
        self$`total_replies` <- this_object$`total_replies`
      }
      if (!is.null(this_object$`lastactivity`)) {
        self$`lastactivity` <- this_object$`lastactivity`
      }
      if (!is.null(this_object$`departmenttitle`)) {
        self$`departmenttitle` <- this_object$`departmenttitle`
      }
      if (!is.null(this_object$`ticketid`)) {
        self$`ticketid` <- this_object$`ticketid`
      }
      if (!is.null(this_object$`can_close`)) {
        self$`can_close` <- this_object$`can_close`
      }
      if (!is.null(this_object$`attachments`)) {
        `attachments_object` <- AnyType$new()
        `attachments_object`$fromJSON(jsonlite::toJSON(this_object$`attachments`, auto_unbox = TRUE, digits = NA))
        self$`attachments` <- `attachments_object`
      }
      if (!is.null(this_object$`status_text`)) {
        self$`status_text` <- this_object$`status_text`
      }
      if (!is.null(this_object$`checked`)) {
        self$`checked` <- this_object$`checked`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return TicketsRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of TicketsRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of TicketsRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`title` <- this_object$`title`
      self$`ticketmaskid` <- this_object$`ticketmaskid`
      self$`lastreplier` <- this_object$`lastreplier`
      self$`status` <- this_object$`status`
      self$`priority` <- this_object$`priority`
      self$`total_replies` <- this_object$`total_replies`
      self$`lastactivity` <- this_object$`lastactivity`
      self$`departmenttitle` <- this_object$`departmenttitle`
      self$`ticketid` <- this_object$`ticketid`
      self$`can_close` <- this_object$`can_close`
      self$`attachments` <- AnyType$new()$fromJSON(jsonlite::toJSON(this_object$`attachments`, auto_unbox = TRUE, digits = NA))
      self$`status_text` <- this_object$`status_text`
      self$`checked` <- this_object$`checked`
      self
    },

    #' @description
    #' Validate JSON input with respect to TicketsRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `title`
      if (!is.null(input_json$`title`)) {
        if (!(is.character(input_json$`title`) && length(input_json$`title`) == 1)) {
          stop(paste("Error! Invalid data for `title`. Must be a string:", input_json$`title`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `title` is missing."))
      }
      # check the required field `ticketmaskid`
      if (!is.null(input_json$`ticketmaskid`)) {
        if (!(is.character(input_json$`ticketmaskid`) && length(input_json$`ticketmaskid`) == 1)) {
          stop(paste("Error! Invalid data for `ticketmaskid`. Must be a string:", input_json$`ticketmaskid`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `ticketmaskid` is missing."))
      }
      # check the required field `lastreplier`
      if (!is.null(input_json$`lastreplier`)) {
        if (!(is.character(input_json$`lastreplier`) && length(input_json$`lastreplier`) == 1)) {
          stop(paste("Error! Invalid data for `lastreplier`. Must be a string:", input_json$`lastreplier`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `lastreplier` is missing."))
      }
      # check the required field `status`
      if (!is.null(input_json$`status`)) {
        if (!(is.character(input_json$`status`) && length(input_json$`status`) == 1)) {
          stop(paste("Error! Invalid data for `status`. Must be a string:", input_json$`status`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `status` is missing."))
      }
      # check the required field `priority`
      if (!is.null(input_json$`priority`)) {
        if (!(is.character(input_json$`priority`) && length(input_json$`priority`) == 1)) {
          stop(paste("Error! Invalid data for `priority`. Must be a string:", input_json$`priority`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `priority` is missing."))
      }
      # check the required field `total_replies`
      if (!is.null(input_json$`total_replies`)) {
        if (!(is.numeric(input_json$`total_replies`) && length(input_json$`total_replies`) == 1)) {
          stop(paste("Error! Invalid data for `total_replies`. Must be an integer:", input_json$`total_replies`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `total_replies` is missing."))
      }
      # check the required field `lastactivity`
      if (!is.null(input_json$`lastactivity`)) {
        if (!(is.character(input_json$`lastactivity`) && length(input_json$`lastactivity`) == 1)) {
          stop(paste("Error! Invalid data for `lastactivity`. Must be a string:", input_json$`lastactivity`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `lastactivity` is missing."))
      }
      # check the required field `departmenttitle`
      if (!is.null(input_json$`departmenttitle`)) {
        if (!(is.character(input_json$`departmenttitle`) && length(input_json$`departmenttitle`) == 1)) {
          stop(paste("Error! Invalid data for `departmenttitle`. Must be a string:", input_json$`departmenttitle`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `departmenttitle` is missing."))
      }
      # check the required field `ticketid`
      if (!is.null(input_json$`ticketid`)) {
        if (!(is.numeric(input_json$`ticketid`) && length(input_json$`ticketid`) == 1)) {
          stop(paste("Error! Invalid data for `ticketid`. Must be an integer:", input_json$`ticketid`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `ticketid` is missing."))
      }
      # check the required field `can_close`
      if (!is.null(input_json$`can_close`)) {
        if (!(is.character(input_json$`can_close`) && length(input_json$`can_close`) == 1)) {
          stop(paste("Error! Invalid data for `can_close`. Must be a string:", input_json$`can_close`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `can_close` is missing."))
      }
      # check the required field `attachments`
      if (!is.null(input_json$`attachments`)) {
        stopifnot(R6::is.R6(input_json$`attachments`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `attachments` is missing."))
      }
      # check the required field `status_text`
      if (!is.null(input_json$`status_text`)) {
        if (!(is.character(input_json$`status_text`) && length(input_json$`status_text`) == 1)) {
          stop(paste("Error! Invalid data for `status_text`. Must be a string:", input_json$`status_text`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `status_text` is missing."))
      }
      # check the required field `checked`
      if (!is.null(input_json$`checked`)) {
        if (!(is.logical(input_json$`checked`) && length(input_json$`checked`) == 1)) {
          stop(paste("Error! Invalid data for `checked`. Must be a boolean:", input_json$`checked`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketsRow: the required field `checked` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of TicketsRow
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `title` is null
      if (is.null(self$`title`)) {
        return(FALSE)
      }

      # check if the required `ticketmaskid` is null
      if (is.null(self$`ticketmaskid`)) {
        return(FALSE)
      }

      # check if the required `lastreplier` is null
      if (is.null(self$`lastreplier`)) {
        return(FALSE)
      }

      # check if the required `status` is null
      if (is.null(self$`status`)) {
        return(FALSE)
      }

      # check if the required `priority` is null
      if (is.null(self$`priority`)) {
        return(FALSE)
      }

      # check if the required `total_replies` is null
      if (is.null(self$`total_replies`)) {
        return(FALSE)
      }

      # check if the required `lastactivity` is null
      if (is.null(self$`lastactivity`)) {
        return(FALSE)
      }

      # check if the required `departmenttitle` is null
      if (is.null(self$`departmenttitle`)) {
        return(FALSE)
      }

      # check if the required `ticketid` is null
      if (is.null(self$`ticketid`)) {
        return(FALSE)
      }

      # check if the required `can_close` is null
      if (is.null(self$`can_close`)) {
        return(FALSE)
      }

      # check if the required `status_text` is null
      if (is.null(self$`status_text`)) {
        return(FALSE)
      }

      # check if the required `checked` is null
      if (is.null(self$`checked`)) {
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
      # check if the required `title` is null
      if (is.null(self$`title`)) {
        invalid_fields["title"] <- "Non-nullable required field `title` cannot be null."
      }

      # check if the required `ticketmaskid` is null
      if (is.null(self$`ticketmaskid`)) {
        invalid_fields["ticketmaskid"] <- "Non-nullable required field `ticketmaskid` cannot be null."
      }

      # check if the required `lastreplier` is null
      if (is.null(self$`lastreplier`)) {
        invalid_fields["lastreplier"] <- "Non-nullable required field `lastreplier` cannot be null."
      }

      # check if the required `status` is null
      if (is.null(self$`status`)) {
        invalid_fields["status"] <- "Non-nullable required field `status` cannot be null."
      }

      # check if the required `priority` is null
      if (is.null(self$`priority`)) {
        invalid_fields["priority"] <- "Non-nullable required field `priority` cannot be null."
      }

      # check if the required `total_replies` is null
      if (is.null(self$`total_replies`)) {
        invalid_fields["total_replies"] <- "Non-nullable required field `total_replies` cannot be null."
      }

      # check if the required `lastactivity` is null
      if (is.null(self$`lastactivity`)) {
        invalid_fields["lastactivity"] <- "Non-nullable required field `lastactivity` cannot be null."
      }

      # check if the required `departmenttitle` is null
      if (is.null(self$`departmenttitle`)) {
        invalid_fields["departmenttitle"] <- "Non-nullable required field `departmenttitle` cannot be null."
      }

      # check if the required `ticketid` is null
      if (is.null(self$`ticketid`)) {
        invalid_fields["ticketid"] <- "Non-nullable required field `ticketid` cannot be null."
      }

      # check if the required `can_close` is null
      if (is.null(self$`can_close`)) {
        invalid_fields["can_close"] <- "Non-nullable required field `can_close` cannot be null."
      }

      # check if the required `status_text` is null
      if (is.null(self$`status_text`)) {
        invalid_fields["status_text"] <- "Non-nullable required field `status_text` cannot be null."
      }

      # check if the required `checked` is null
      if (is.null(self$`checked`)) {
        invalid_fields["checked"] <- "Non-nullable required field `checked` cannot be null."
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
# TicketsRow$unlock()
#
## Below is an example to define the print function
# TicketsRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# TicketsRow$lock()

