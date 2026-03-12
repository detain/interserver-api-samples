#' Create a new HardDrive
#'
#' @description
#' A hard drive option available for a dedicated server configuration.
#'
#' @docType class
#' @title HardDrive
#' @description HardDrive Class
#' @format An \code{R6Class} generator object
#' @field id  integer [optional]
#' @field short_desc  character [optional]
#' @field size  character [optional]
#' @field drive_type  character [optional]
#' @field monthly_price  numeric [optional]
#' @field monthly_price_display  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HardDrive <- R6::R6Class(
  "HardDrive",
  public = list(
    `id` = NULL,
    `short_desc` = NULL,
    `size` = NULL,
    `drive_type` = NULL,
    `monthly_price` = NULL,
    `monthly_price_display` = NULL,

    #' @description
    #' Initialize a new HardDrive class.
    #'
    #' @param id id
    #' @param short_desc short_desc
    #' @param size size
    #' @param drive_type drive_type
    #' @param monthly_price monthly_price
    #' @param monthly_price_display monthly_price_display
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `short_desc` = NULL, `size` = NULL, `drive_type` = NULL, `monthly_price` = NULL, `monthly_price_display` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.numeric(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be an integer:", `id`))
        }
        self$`id` <- `id`
      }
      if (!is.null(`short_desc`)) {
        if (!(is.character(`short_desc`) && length(`short_desc`) == 1)) {
          stop(paste("Error! Invalid data for `short_desc`. Must be a string:", `short_desc`))
        }
        self$`short_desc` <- `short_desc`
      }
      if (!is.null(`size`)) {
        if (!(is.character(`size`) && length(`size`) == 1)) {
          stop(paste("Error! Invalid data for `size`. Must be a string:", `size`))
        }
        self$`size` <- `size`
      }
      if (!is.null(`drive_type`)) {
        if (!(is.character(`drive_type`) && length(`drive_type`) == 1)) {
          stop(paste("Error! Invalid data for `drive_type`. Must be a string:", `drive_type`))
        }
        self$`drive_type` <- `drive_type`
      }
      if (!is.null(`monthly_price`)) {
        self$`monthly_price` <- `monthly_price`
      }
      if (!is.null(`monthly_price_display`)) {
        if (!(is.character(`monthly_price_display`) && length(`monthly_price_display`) == 1)) {
          stop(paste("Error! Invalid data for `monthly_price_display`. Must be a string:", `monthly_price_display`))
        }
        self$`monthly_price_display` <- `monthly_price_display`
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
    #' @return HardDrive as a base R list.
    #' @examples
    #' # convert array of HardDrive (x) to a data frame
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
    #' Convert HardDrive to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HardDriveObject <- list()
      if (!is.null(self$`id`)) {
        HardDriveObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`short_desc`)) {
        HardDriveObject[["short_desc"]] <-
          self$`short_desc`
      }
      if (!is.null(self$`size`)) {
        HardDriveObject[["size"]] <-
          self$`size`
      }
      if (!is.null(self$`drive_type`)) {
        HardDriveObject[["drive_type"]] <-
          self$`drive_type`
      }
      if (!is.null(self$`monthly_price`)) {
        HardDriveObject[["monthly_price"]] <-
          self$`monthly_price`
      }
      if (!is.null(self$`monthly_price_display`)) {
        HardDriveObject[["monthly_price_display"]] <-
          self$`monthly_price_display`
      }
      return(HardDriveObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of HardDrive
    #'
    #' @param input_json the JSON input
    #' @return the instance of HardDrive
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`short_desc`)) {
        self$`short_desc` <- this_object$`short_desc`
      }
      if (!is.null(this_object$`size`)) {
        self$`size` <- this_object$`size`
      }
      if (!is.null(this_object$`drive_type`)) {
        self$`drive_type` <- this_object$`drive_type`
      }
      if (!is.null(this_object$`monthly_price`)) {
        self$`monthly_price` <- this_object$`monthly_price`
      }
      if (!is.null(this_object$`monthly_price_display`)) {
        self$`monthly_price_display` <- this_object$`monthly_price_display`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HardDrive in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HardDrive
    #'
    #' @param input_json the JSON input
    #' @return the instance of HardDrive
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`short_desc` <- this_object$`short_desc`
      self$`size` <- this_object$`size`
      self$`drive_type` <- this_object$`drive_type`
      self$`monthly_price` <- this_object$`monthly_price`
      self$`monthly_price_display` <- this_object$`monthly_price_display`
      self
    },

    #' @description
    #' Validate JSON input with respect to HardDrive and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HardDrive
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
# HardDrive$unlock()
#
## Below is an example to define the print function
# HardDrive$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HardDrive$lock()

