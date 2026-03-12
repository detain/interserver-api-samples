#' Create a new QuickserverRow
#'
#' @description
#' A result row from the `Quickservers` `GET` request.
#'
#' @docType class
#' @title QuickserverRow
#' @description QuickserverRow Class
#' @format An \code{R6Class} generator object
#' @field qs_id The id of the qs. character
#' @field qs_name The name of the qs. character
#' @field cost The cost of the qs. character
#' @field qs_hostname The hostname of the qs. character
#' @field qs_status The status of the qs. character
#' @field qs_comment The comment of the qs. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverRow <- R6::R6Class(
  "QuickserverRow",
  public = list(
    `qs_id` = NULL,
    `qs_name` = NULL,
    `cost` = NULL,
    `qs_hostname` = NULL,
    `qs_status` = NULL,
    `qs_comment` = NULL,

    #' @description
    #' Initialize a new QuickserverRow class.
    #'
    #' @param qs_id The id of the qs.
    #' @param qs_name The name of the qs.
    #' @param cost The cost of the qs.
    #' @param qs_hostname The hostname of the qs.
    #' @param qs_status The status of the qs.
    #' @param qs_comment The comment of the qs.
    #' @param ... Other optional arguments.
    initialize = function(`qs_id`, `qs_name`, `cost`, `qs_hostname`, `qs_status`, `qs_comment`, ...) {
      if (!missing(`qs_id`)) {
        if (!(is.character(`qs_id`) && length(`qs_id`) == 1)) {
          stop(paste("Error! Invalid data for `qs_id`. Must be a string:", `qs_id`))
        }
        self$`qs_id` <- `qs_id`
      }
      if (!missing(`qs_name`)) {
        if (!(is.character(`qs_name`) && length(`qs_name`) == 1)) {
          stop(paste("Error! Invalid data for `qs_name`. Must be a string:", `qs_name`))
        }
        self$`qs_name` <- `qs_name`
      }
      if (!missing(`cost`)) {
        if (!(is.character(`cost`) && length(`cost`) == 1)) {
          stop(paste("Error! Invalid data for `cost`. Must be a string:", `cost`))
        }
        self$`cost` <- `cost`
      }
      if (!missing(`qs_hostname`)) {
        if (!(is.character(`qs_hostname`) && length(`qs_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `qs_hostname`. Must be a string:", `qs_hostname`))
        }
        self$`qs_hostname` <- `qs_hostname`
      }
      if (!missing(`qs_status`)) {
        if (!(is.character(`qs_status`) && length(`qs_status`) == 1)) {
          stop(paste("Error! Invalid data for `qs_status`. Must be a string:", `qs_status`))
        }
        self$`qs_status` <- `qs_status`
      }
      if (!missing(`qs_comment`)) {
        if (!(is.character(`qs_comment`) && length(`qs_comment`) == 1)) {
          stop(paste("Error! Invalid data for `qs_comment`. Must be a string:", `qs_comment`))
        }
        self$`qs_comment` <- `qs_comment`
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
    #' @return QuickserverRow as a base R list.
    #' @examples
    #' # convert array of QuickserverRow (x) to a data frame
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
    #' Convert QuickserverRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverRowObject <- list()
      if (!is.null(self$`qs_id`)) {
        QuickserverRowObject[["qs_id"]] <-
          self$`qs_id`
      }
      if (!is.null(self$`qs_name`)) {
        QuickserverRowObject[["qs_name"]] <-
          self$`qs_name`
      }
      if (!is.null(self$`cost`)) {
        QuickserverRowObject[["cost"]] <-
          self$`cost`
      }
      if (!is.null(self$`qs_hostname`)) {
        QuickserverRowObject[["qs_hostname"]] <-
          self$`qs_hostname`
      }
      if (!is.null(self$`qs_status`)) {
        QuickserverRowObject[["qs_status"]] <-
          self$`qs_status`
      }
      if (!is.null(self$`qs_comment`)) {
        QuickserverRowObject[["qs_comment"]] <-
          self$`qs_comment`
      }
      return(QuickserverRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`qs_id`)) {
        self$`qs_id` <- this_object$`qs_id`
      }
      if (!is.null(this_object$`qs_name`)) {
        self$`qs_name` <- this_object$`qs_name`
      }
      if (!is.null(this_object$`cost`)) {
        self$`cost` <- this_object$`cost`
      }
      if (!is.null(this_object$`qs_hostname`)) {
        self$`qs_hostname` <- this_object$`qs_hostname`
      }
      if (!is.null(this_object$`qs_status`)) {
        self$`qs_status` <- this_object$`qs_status`
      }
      if (!is.null(this_object$`qs_comment`)) {
        self$`qs_comment` <- this_object$`qs_comment`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`qs_id` <- this_object$`qs_id`
      self$`qs_name` <- this_object$`qs_name`
      self$`cost` <- this_object$`cost`
      self$`qs_hostname` <- this_object$`qs_hostname`
      self$`qs_status` <- this_object$`qs_status`
      self$`qs_comment` <- this_object$`qs_comment`
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `qs_id`
      if (!is.null(input_json$`qs_id`)) {
        if (!(is.character(input_json$`qs_id`) && length(input_json$`qs_id`) == 1)) {
          stop(paste("Error! Invalid data for `qs_id`. Must be a string:", input_json$`qs_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for QuickserverRow: the required field `qs_id` is missing."))
      }
      # check the required field `qs_name`
      if (!is.null(input_json$`qs_name`)) {
        if (!(is.character(input_json$`qs_name`) && length(input_json$`qs_name`) == 1)) {
          stop(paste("Error! Invalid data for `qs_name`. Must be a string:", input_json$`qs_name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for QuickserverRow: the required field `qs_name` is missing."))
      }
      # check the required field `cost`
      if (!is.null(input_json$`cost`)) {
        if (!(is.character(input_json$`cost`) && length(input_json$`cost`) == 1)) {
          stop(paste("Error! Invalid data for `cost`. Must be a string:", input_json$`cost`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for QuickserverRow: the required field `cost` is missing."))
      }
      # check the required field `qs_hostname`
      if (!is.null(input_json$`qs_hostname`)) {
        if (!(is.character(input_json$`qs_hostname`) && length(input_json$`qs_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `qs_hostname`. Must be a string:", input_json$`qs_hostname`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for QuickserverRow: the required field `qs_hostname` is missing."))
      }
      # check the required field `qs_status`
      if (!is.null(input_json$`qs_status`)) {
        if (!(is.character(input_json$`qs_status`) && length(input_json$`qs_status`) == 1)) {
          stop(paste("Error! Invalid data for `qs_status`. Must be a string:", input_json$`qs_status`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for QuickserverRow: the required field `qs_status` is missing."))
      }
      # check the required field `qs_comment`
      if (!is.null(input_json$`qs_comment`)) {
        if (!(is.character(input_json$`qs_comment`) && length(input_json$`qs_comment`) == 1)) {
          stop(paste("Error! Invalid data for `qs_comment`. Must be a string:", input_json$`qs_comment`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for QuickserverRow: the required field `qs_comment` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverRow
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `qs_id` is null
      if (is.null(self$`qs_id`)) {
        return(FALSE)
      }

      # check if the required `qs_name` is null
      if (is.null(self$`qs_name`)) {
        return(FALSE)
      }

      # check if the required `cost` is null
      if (is.null(self$`cost`)) {
        return(FALSE)
      }

      # check if the required `qs_hostname` is null
      if (is.null(self$`qs_hostname`)) {
        return(FALSE)
      }

      # check if the required `qs_status` is null
      if (is.null(self$`qs_status`)) {
        return(FALSE)
      }

      # check if the required `qs_comment` is null
      if (is.null(self$`qs_comment`)) {
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
      # check if the required `qs_id` is null
      if (is.null(self$`qs_id`)) {
        invalid_fields["qs_id"] <- "Non-nullable required field `qs_id` cannot be null."
      }

      # check if the required `qs_name` is null
      if (is.null(self$`qs_name`)) {
        invalid_fields["qs_name"] <- "Non-nullable required field `qs_name` cannot be null."
      }

      # check if the required `cost` is null
      if (is.null(self$`cost`)) {
        invalid_fields["cost"] <- "Non-nullable required field `cost` cannot be null."
      }

      # check if the required `qs_hostname` is null
      if (is.null(self$`qs_hostname`)) {
        invalid_fields["qs_hostname"] <- "Non-nullable required field `qs_hostname` cannot be null."
      }

      # check if the required `qs_status` is null
      if (is.null(self$`qs_status`)) {
        invalid_fields["qs_status"] <- "Non-nullable required field `qs_status` cannot be null."
      }

      # check if the required `qs_comment` is null
      if (is.null(self$`qs_comment`)) {
        invalid_fields["qs_comment"] <- "Non-nullable required field `qs_comment` cannot be null."
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
# QuickserverRow$unlock()
#
## Below is an example to define the print function
# QuickserverRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverRow$lock()

