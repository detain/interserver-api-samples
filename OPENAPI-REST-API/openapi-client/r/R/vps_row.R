#' Create a new VpsRow
#'
#' @description
#' A result row from the `Vps` `GET` request.
#'
#' @docType class
#' @title VpsRow
#' @description VpsRow Class
#' @format An \code{R6Class} generator object
#' @field vps_id The id of the vps. character
#' @field vps_name The name of the vps. character
#' @field repeat_invoices_cost The repeat invoices cost of the vps. character
#' @field vps_hostname The hostname of the vps. character
#' @field vps_ip The ip of the vps. character
#' @field vps_status The status of the vps. character
#' @field services_name The services name of the vps. character
#' @field vps_comment The comment of the vps. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsRow <- R6::R6Class(
  "VpsRow",
  public = list(
    `vps_id` = NULL,
    `vps_name` = NULL,
    `repeat_invoices_cost` = NULL,
    `vps_hostname` = NULL,
    `vps_ip` = NULL,
    `vps_status` = NULL,
    `services_name` = NULL,
    `vps_comment` = NULL,

    #' @description
    #' Initialize a new VpsRow class.
    #'
    #' @param vps_id The id of the vps.
    #' @param vps_name The name of the vps.
    #' @param repeat_invoices_cost The repeat invoices cost of the vps.
    #' @param vps_hostname The hostname of the vps.
    #' @param vps_ip The ip of the vps.
    #' @param vps_status The status of the vps.
    #' @param services_name The services name of the vps.
    #' @param vps_comment The comment of the vps.
    #' @param ... Other optional arguments.
    initialize = function(`vps_id`, `vps_name`, `repeat_invoices_cost`, `vps_hostname`, `vps_ip`, `vps_status`, `services_name`, `vps_comment`, ...) {
      if (!missing(`vps_id`)) {
        if (!(is.character(`vps_id`) && length(`vps_id`) == 1)) {
          stop(paste("Error! Invalid data for `vps_id`. Must be a string:", `vps_id`))
        }
        self$`vps_id` <- `vps_id`
      }
      if (!missing(`vps_name`)) {
        if (!(is.character(`vps_name`) && length(`vps_name`) == 1)) {
          stop(paste("Error! Invalid data for `vps_name`. Must be a string:", `vps_name`))
        }
        self$`vps_name` <- `vps_name`
      }
      if (!missing(`repeat_invoices_cost`)) {
        if (!(is.character(`repeat_invoices_cost`) && length(`repeat_invoices_cost`) == 1)) {
          stop(paste("Error! Invalid data for `repeat_invoices_cost`. Must be a string:", `repeat_invoices_cost`))
        }
        self$`repeat_invoices_cost` <- `repeat_invoices_cost`
      }
      if (!missing(`vps_hostname`)) {
        if (!(is.character(`vps_hostname`) && length(`vps_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `vps_hostname`. Must be a string:", `vps_hostname`))
        }
        self$`vps_hostname` <- `vps_hostname`
      }
      if (!missing(`vps_ip`)) {
        if (!(is.character(`vps_ip`) && length(`vps_ip`) == 1)) {
          stop(paste("Error! Invalid data for `vps_ip`. Must be a string:", `vps_ip`))
        }
        self$`vps_ip` <- `vps_ip`
      }
      if (!missing(`vps_status`)) {
        if (!(is.character(`vps_status`) && length(`vps_status`) == 1)) {
          stop(paste("Error! Invalid data for `vps_status`. Must be a string:", `vps_status`))
        }
        self$`vps_status` <- `vps_status`
      }
      if (!missing(`services_name`)) {
        if (!(is.character(`services_name`) && length(`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", `services_name`))
        }
        self$`services_name` <- `services_name`
      }
      if (!missing(`vps_comment`)) {
        if (!(is.character(`vps_comment`) && length(`vps_comment`) == 1)) {
          stop(paste("Error! Invalid data for `vps_comment`. Must be a string:", `vps_comment`))
        }
        self$`vps_comment` <- `vps_comment`
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
    #' @return VpsRow as a base R list.
    #' @examples
    #' # convert array of VpsRow (x) to a data frame
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
    #' Convert VpsRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsRowObject <- list()
      if (!is.null(self$`vps_id`)) {
        VpsRowObject[["vps_id"]] <-
          self$`vps_id`
      }
      if (!is.null(self$`vps_name`)) {
        VpsRowObject[["vps_name"]] <-
          self$`vps_name`
      }
      if (!is.null(self$`repeat_invoices_cost`)) {
        VpsRowObject[["repeat_invoices_cost"]] <-
          self$`repeat_invoices_cost`
      }
      if (!is.null(self$`vps_hostname`)) {
        VpsRowObject[["vps_hostname"]] <-
          self$`vps_hostname`
      }
      if (!is.null(self$`vps_ip`)) {
        VpsRowObject[["vps_ip"]] <-
          self$`vps_ip`
      }
      if (!is.null(self$`vps_status`)) {
        VpsRowObject[["vps_status"]] <-
          self$`vps_status`
      }
      if (!is.null(self$`services_name`)) {
        VpsRowObject[["services_name"]] <-
          self$`services_name`
      }
      if (!is.null(self$`vps_comment`)) {
        VpsRowObject[["vps_comment"]] <-
          self$`vps_comment`
      }
      return(VpsRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`vps_id`)) {
        self$`vps_id` <- this_object$`vps_id`
      }
      if (!is.null(this_object$`vps_name`)) {
        self$`vps_name` <- this_object$`vps_name`
      }
      if (!is.null(this_object$`repeat_invoices_cost`)) {
        self$`repeat_invoices_cost` <- this_object$`repeat_invoices_cost`
      }
      if (!is.null(this_object$`vps_hostname`)) {
        self$`vps_hostname` <- this_object$`vps_hostname`
      }
      if (!is.null(this_object$`vps_ip`)) {
        self$`vps_ip` <- this_object$`vps_ip`
      }
      if (!is.null(this_object$`vps_status`)) {
        self$`vps_status` <- this_object$`vps_status`
      }
      if (!is.null(this_object$`services_name`)) {
        self$`services_name` <- this_object$`services_name`
      }
      if (!is.null(this_object$`vps_comment`)) {
        self$`vps_comment` <- this_object$`vps_comment`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`vps_id` <- this_object$`vps_id`
      self$`vps_name` <- this_object$`vps_name`
      self$`repeat_invoices_cost` <- this_object$`repeat_invoices_cost`
      self$`vps_hostname` <- this_object$`vps_hostname`
      self$`vps_ip` <- this_object$`vps_ip`
      self$`vps_status` <- this_object$`vps_status`
      self$`services_name` <- this_object$`services_name`
      self$`vps_comment` <- this_object$`vps_comment`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `vps_id`
      if (!is.null(input_json$`vps_id`)) {
        if (!(is.character(input_json$`vps_id`) && length(input_json$`vps_id`) == 1)) {
          stop(paste("Error! Invalid data for `vps_id`. Must be a string:", input_json$`vps_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsRow: the required field `vps_id` is missing."))
      }
      # check the required field `vps_name`
      if (!is.null(input_json$`vps_name`)) {
        if (!(is.character(input_json$`vps_name`) && length(input_json$`vps_name`) == 1)) {
          stop(paste("Error! Invalid data for `vps_name`. Must be a string:", input_json$`vps_name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsRow: the required field `vps_name` is missing."))
      }
      # check the required field `repeat_invoices_cost`
      if (!is.null(input_json$`repeat_invoices_cost`)) {
        if (!(is.character(input_json$`repeat_invoices_cost`) && length(input_json$`repeat_invoices_cost`) == 1)) {
          stop(paste("Error! Invalid data for `repeat_invoices_cost`. Must be a string:", input_json$`repeat_invoices_cost`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsRow: the required field `repeat_invoices_cost` is missing."))
      }
      # check the required field `vps_hostname`
      if (!is.null(input_json$`vps_hostname`)) {
        if (!(is.character(input_json$`vps_hostname`) && length(input_json$`vps_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `vps_hostname`. Must be a string:", input_json$`vps_hostname`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsRow: the required field `vps_hostname` is missing."))
      }
      # check the required field `vps_ip`
      if (!is.null(input_json$`vps_ip`)) {
        if (!(is.character(input_json$`vps_ip`) && length(input_json$`vps_ip`) == 1)) {
          stop(paste("Error! Invalid data for `vps_ip`. Must be a string:", input_json$`vps_ip`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsRow: the required field `vps_ip` is missing."))
      }
      # check the required field `vps_status`
      if (!is.null(input_json$`vps_status`)) {
        if (!(is.character(input_json$`vps_status`) && length(input_json$`vps_status`) == 1)) {
          stop(paste("Error! Invalid data for `vps_status`. Must be a string:", input_json$`vps_status`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsRow: the required field `vps_status` is missing."))
      }
      # check the required field `services_name`
      if (!is.null(input_json$`services_name`)) {
        if (!(is.character(input_json$`services_name`) && length(input_json$`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", input_json$`services_name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsRow: the required field `services_name` is missing."))
      }
      # check the required field `vps_comment`
      if (!is.null(input_json$`vps_comment`)) {
        if (!(is.character(input_json$`vps_comment`) && length(input_json$`vps_comment`) == 1)) {
          stop(paste("Error! Invalid data for `vps_comment`. Must be a string:", input_json$`vps_comment`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsRow: the required field `vps_comment` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsRow
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `vps_id` is null
      if (is.null(self$`vps_id`)) {
        return(FALSE)
      }

      # check if the required `vps_name` is null
      if (is.null(self$`vps_name`)) {
        return(FALSE)
      }

      # check if the required `repeat_invoices_cost` is null
      if (is.null(self$`repeat_invoices_cost`)) {
        return(FALSE)
      }

      # check if the required `vps_hostname` is null
      if (is.null(self$`vps_hostname`)) {
        return(FALSE)
      }

      # check if the required `vps_ip` is null
      if (is.null(self$`vps_ip`)) {
        return(FALSE)
      }

      # check if the required `vps_status` is null
      if (is.null(self$`vps_status`)) {
        return(FALSE)
      }

      # check if the required `services_name` is null
      if (is.null(self$`services_name`)) {
        return(FALSE)
      }

      # check if the required `vps_comment` is null
      if (is.null(self$`vps_comment`)) {
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
      # check if the required `vps_id` is null
      if (is.null(self$`vps_id`)) {
        invalid_fields["vps_id"] <- "Non-nullable required field `vps_id` cannot be null."
      }

      # check if the required `vps_name` is null
      if (is.null(self$`vps_name`)) {
        invalid_fields["vps_name"] <- "Non-nullable required field `vps_name` cannot be null."
      }

      # check if the required `repeat_invoices_cost` is null
      if (is.null(self$`repeat_invoices_cost`)) {
        invalid_fields["repeat_invoices_cost"] <- "Non-nullable required field `repeat_invoices_cost` cannot be null."
      }

      # check if the required `vps_hostname` is null
      if (is.null(self$`vps_hostname`)) {
        invalid_fields["vps_hostname"] <- "Non-nullable required field `vps_hostname` cannot be null."
      }

      # check if the required `vps_ip` is null
      if (is.null(self$`vps_ip`)) {
        invalid_fields["vps_ip"] <- "Non-nullable required field `vps_ip` cannot be null."
      }

      # check if the required `vps_status` is null
      if (is.null(self$`vps_status`)) {
        invalid_fields["vps_status"] <- "Non-nullable required field `vps_status` cannot be null."
      }

      # check if the required `services_name` is null
      if (is.null(self$`services_name`)) {
        invalid_fields["services_name"] <- "Non-nullable required field `services_name` cannot be null."
      }

      # check if the required `vps_comment` is null
      if (is.null(self$`vps_comment`)) {
        invalid_fields["vps_comment"] <- "Non-nullable required field `vps_comment` cannot be null."
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
# VpsRow$unlock()
#
## Below is an example to define the print function
# VpsRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsRow$lock()

