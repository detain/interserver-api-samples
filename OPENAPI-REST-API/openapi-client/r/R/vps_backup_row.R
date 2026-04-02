#' Create a new VpsBackupRow
#'
#' @description
#' A single backed-up item and information about it.
#'
#' @docType class
#' @title VpsBackupRow
#' @description VpsBackupRow Class
#' @format An \code{R6Class} generator object
#' @field type Backup Type character
#' @field service The service id such as vps  id. integer
#' @field name The name of the backup. character
#' @field size Size of the file in bytes integer
#' @field date The creation date of the backup in a unix timestamp. integer
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsBackupRow <- R6::R6Class(
  "VpsBackupRow",
  public = list(
    `type` = NULL,
    `service` = NULL,
    `name` = NULL,
    `size` = NULL,
    `date` = NULL,

    #' @description
    #' Initialize a new VpsBackupRow class.
    #'
    #' @param type Backup Type
    #' @param service The service id such as vps  id.
    #' @param name The name of the backup.
    #' @param size Size of the file in bytes
    #' @param date The creation date of the backup in a unix timestamp.
    #' @param ... Other optional arguments.
    initialize = function(`type`, `service`, `name`, `size`, `date`, ...) {
      if (!missing(`type`)) {
        if (!(is.character(`type`) && length(`type`) == 1)) {
          stop(paste("Error! Invalid data for `type`. Must be a string:", `type`))
        }
        self$`type` <- `type`
      }
      if (!missing(`service`)) {
        if (!(is.numeric(`service`) && length(`service`) == 1)) {
          stop(paste("Error! Invalid data for `service`. Must be an integer:", `service`))
        }
        self$`service` <- `service`
      }
      if (!missing(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!missing(`size`)) {
        if (!(is.numeric(`size`) && length(`size`) == 1)) {
          stop(paste("Error! Invalid data for `size`. Must be an integer:", `size`))
        }
        self$`size` <- `size`
      }
      if (!missing(`date`)) {
        if (!(is.numeric(`date`) && length(`date`) == 1)) {
          stop(paste("Error! Invalid data for `date`. Must be an integer:", `date`))
        }
        self$`date` <- `date`
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
    #' @return VpsBackupRow as a base R list.
    #' @examples
    #' # convert array of VpsBackupRow (x) to a data frame
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
    #' Convert VpsBackupRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsBackupRowObject <- list()
      if (!is.null(self$`type`)) {
        VpsBackupRowObject[["type"]] <-
          self$`type`
      }
      if (!is.null(self$`service`)) {
        VpsBackupRowObject[["service"]] <-
          self$`service`
      }
      if (!is.null(self$`name`)) {
        VpsBackupRowObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`size`)) {
        VpsBackupRowObject[["size"]] <-
          self$`size`
      }
      if (!is.null(self$`date`)) {
        VpsBackupRowObject[["date"]] <-
          self$`date`
      }
      return(VpsBackupRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsBackupRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsBackupRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`type`)) {
        self$`type` <- this_object$`type`
      }
      if (!is.null(this_object$`service`)) {
        self$`service` <- this_object$`service`
      }
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`size`)) {
        self$`size` <- this_object$`size`
      }
      if (!is.null(this_object$`date`)) {
        self$`date` <- this_object$`date`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsBackupRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsBackupRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsBackupRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`type` <- this_object$`type`
      self$`service` <- this_object$`service`
      self$`name` <- this_object$`name`
      self$`size` <- this_object$`size`
      self$`date` <- this_object$`date`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsBackupRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `type`
      if (!is.null(input_json$`type`)) {
        if (!(is.character(input_json$`type`) && length(input_json$`type`) == 1)) {
          stop(paste("Error! Invalid data for `type`. Must be a string:", input_json$`type`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsBackupRow: the required field `type` is missing."))
      }
      # check the required field `service`
      if (!is.null(input_json$`service`)) {
        if (!(is.numeric(input_json$`service`) && length(input_json$`service`) == 1)) {
          stop(paste("Error! Invalid data for `service`. Must be an integer:", input_json$`service`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsBackupRow: the required field `service` is missing."))
      }
      # check the required field `name`
      if (!is.null(input_json$`name`)) {
        if (!(is.character(input_json$`name`) && length(input_json$`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", input_json$`name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsBackupRow: the required field `name` is missing."))
      }
      # check the required field `size`
      if (!is.null(input_json$`size`)) {
        if (!(is.numeric(input_json$`size`) && length(input_json$`size`) == 1)) {
          stop(paste("Error! Invalid data for `size`. Must be an integer:", input_json$`size`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsBackupRow: the required field `size` is missing."))
      }
      # check the required field `date`
      if (!is.null(input_json$`date`)) {
        if (!(is.numeric(input_json$`date`) && length(input_json$`date`) == 1)) {
          stop(paste("Error! Invalid data for `date`. Must be an integer:", input_json$`date`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsBackupRow: the required field `date` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsBackupRow
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `type` is null
      if (is.null(self$`type`)) {
        return(FALSE)
      }

      # check if the required `service` is null
      if (is.null(self$`service`)) {
        return(FALSE)
      }

      # check if the required `name` is null
      if (is.null(self$`name`)) {
        return(FALSE)
      }

      # check if the required `size` is null
      if (is.null(self$`size`)) {
        return(FALSE)
      }

      # check if the required `date` is null
      if (is.null(self$`date`)) {
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
      # check if the required `type` is null
      if (is.null(self$`type`)) {
        invalid_fields["type"] <- "Non-nullable required field `type` cannot be null."
      }

      # check if the required `service` is null
      if (is.null(self$`service`)) {
        invalid_fields["service"] <- "Non-nullable required field `service` cannot be null."
      }

      # check if the required `name` is null
      if (is.null(self$`name`)) {
        invalid_fields["name"] <- "Non-nullable required field `name` cannot be null."
      }

      # check if the required `size` is null
      if (is.null(self$`size`)) {
        invalid_fields["size"] <- "Non-nullable required field `size` cannot be null."
      }

      # check if the required `date` is null
      if (is.null(self$`date`)) {
        invalid_fields["date"] <- "Non-nullable required field `date` cannot be null."
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
# VpsBackupRow$unlock()
#
## Below is an example to define the print function
# VpsBackupRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsBackupRow$lock()

