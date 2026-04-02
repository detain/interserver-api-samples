#' Create a new BackupServiceMaster
#'
#' @description
#' BackupServiceMaster Class
#'
#' @docType class
#' @title BackupServiceMaster
#' @description BackupServiceMaster Class
#' @format An \code{R6Class} generator object
#' @field backup_id Backup ID of the service master. integer [optional]
#' @field backup_name Name of the backup service. character [optional]
#' @field backup_ip IP address of the backup service. character [optional]
#' @field backup_type Type of the backup service. integer [optional]
#' @field backup_hdsize Size of the backup service's hard drive. integer [optional]
#' @field backup_hdfree Amount of free space on the backup service's hard drive. integer [optional]
#' @field backup_last_update Last update timestamp of the backup service. character [optional]
#' @field backup_available Availability status of the backup service. integer [optional]
#' @field backup_iowait I/O wait status of the backup service. integer [optional]
#' @field backup_order Order associated with the backup service. integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BackupServiceMaster <- R6::R6Class(
  "BackupServiceMaster",
  public = list(
    `backup_id` = NULL,
    `backup_name` = NULL,
    `backup_ip` = NULL,
    `backup_type` = NULL,
    `backup_hdsize` = NULL,
    `backup_hdfree` = NULL,
    `backup_last_update` = NULL,
    `backup_available` = NULL,
    `backup_iowait` = NULL,
    `backup_order` = NULL,

    #' @description
    #' Initialize a new BackupServiceMaster class.
    #'
    #' @param backup_id Backup ID of the service master.
    #' @param backup_name Name of the backup service.
    #' @param backup_ip IP address of the backup service.
    #' @param backup_type Type of the backup service.
    #' @param backup_hdsize Size of the backup service's hard drive.
    #' @param backup_hdfree Amount of free space on the backup service's hard drive.
    #' @param backup_last_update Last update timestamp of the backup service.
    #' @param backup_available Availability status of the backup service.
    #' @param backup_iowait I/O wait status of the backup service.
    #' @param backup_order Order associated with the backup service.
    #' @param ... Other optional arguments.
    initialize = function(`backup_id` = NULL, `backup_name` = NULL, `backup_ip` = NULL, `backup_type` = NULL, `backup_hdsize` = NULL, `backup_hdfree` = NULL, `backup_last_update` = NULL, `backup_available` = NULL, `backup_iowait` = NULL, `backup_order` = NULL, ...) {
      if (!is.null(`backup_id`)) {
        if (!(is.numeric(`backup_id`) && length(`backup_id`) == 1)) {
          stop(paste("Error! Invalid data for `backup_id`. Must be an integer:", `backup_id`))
        }
        self$`backup_id` <- `backup_id`
      }
      if (!is.null(`backup_name`)) {
        if (!(is.character(`backup_name`) && length(`backup_name`) == 1)) {
          stop(paste("Error! Invalid data for `backup_name`. Must be a string:", `backup_name`))
        }
        self$`backup_name` <- `backup_name`
      }
      if (!is.null(`backup_ip`)) {
        if (!(is.character(`backup_ip`) && length(`backup_ip`) == 1)) {
          stop(paste("Error! Invalid data for `backup_ip`. Must be a string:", `backup_ip`))
        }
        self$`backup_ip` <- `backup_ip`
      }
      if (!is.null(`backup_type`)) {
        if (!(is.numeric(`backup_type`) && length(`backup_type`) == 1)) {
          stop(paste("Error! Invalid data for `backup_type`. Must be an integer:", `backup_type`))
        }
        self$`backup_type` <- `backup_type`
      }
      if (!is.null(`backup_hdsize`)) {
        if (!(is.numeric(`backup_hdsize`) && length(`backup_hdsize`) == 1)) {
          stop(paste("Error! Invalid data for `backup_hdsize`. Must be an integer:", `backup_hdsize`))
        }
        self$`backup_hdsize` <- `backup_hdsize`
      }
      if (!is.null(`backup_hdfree`)) {
        if (!(is.numeric(`backup_hdfree`) && length(`backup_hdfree`) == 1)) {
          stop(paste("Error! Invalid data for `backup_hdfree`. Must be an integer:", `backup_hdfree`))
        }
        self$`backup_hdfree` <- `backup_hdfree`
      }
      if (!is.null(`backup_last_update`)) {
        if (!(is.character(`backup_last_update`) && length(`backup_last_update`) == 1)) {
          stop(paste("Error! Invalid data for `backup_last_update`. Must be a string:", `backup_last_update`))
        }
        self$`backup_last_update` <- `backup_last_update`
      }
      if (!is.null(`backup_available`)) {
        if (!(is.numeric(`backup_available`) && length(`backup_available`) == 1)) {
          stop(paste("Error! Invalid data for `backup_available`. Must be an integer:", `backup_available`))
        }
        self$`backup_available` <- `backup_available`
      }
      if (!is.null(`backup_iowait`)) {
        if (!(is.numeric(`backup_iowait`) && length(`backup_iowait`) == 1)) {
          stop(paste("Error! Invalid data for `backup_iowait`. Must be an integer:", `backup_iowait`))
        }
        self$`backup_iowait` <- `backup_iowait`
      }
      if (!is.null(`backup_order`)) {
        if (!(is.numeric(`backup_order`) && length(`backup_order`) == 1)) {
          stop(paste("Error! Invalid data for `backup_order`. Must be an integer:", `backup_order`))
        }
        self$`backup_order` <- `backup_order`
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
    #' @return BackupServiceMaster as a base R list.
    #' @examples
    #' # convert array of BackupServiceMaster (x) to a data frame
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
    #' Convert BackupServiceMaster to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BackupServiceMasterObject <- list()
      if (!is.null(self$`backup_id`)) {
        BackupServiceMasterObject[["backup_id"]] <-
          self$`backup_id`
      }
      if (!is.null(self$`backup_name`)) {
        BackupServiceMasterObject[["backup_name"]] <-
          self$`backup_name`
      }
      if (!is.null(self$`backup_ip`)) {
        BackupServiceMasterObject[["backup_ip"]] <-
          self$`backup_ip`
      }
      if (!is.null(self$`backup_type`)) {
        BackupServiceMasterObject[["backup_type"]] <-
          self$`backup_type`
      }
      if (!is.null(self$`backup_hdsize`)) {
        BackupServiceMasterObject[["backup_hdsize"]] <-
          self$`backup_hdsize`
      }
      if (!is.null(self$`backup_hdfree`)) {
        BackupServiceMasterObject[["backup_hdfree"]] <-
          self$`backup_hdfree`
      }
      if (!is.null(self$`backup_last_update`)) {
        BackupServiceMasterObject[["backup_last_update"]] <-
          self$`backup_last_update`
      }
      if (!is.null(self$`backup_available`)) {
        BackupServiceMasterObject[["backup_available"]] <-
          self$`backup_available`
      }
      if (!is.null(self$`backup_iowait`)) {
        BackupServiceMasterObject[["backup_iowait"]] <-
          self$`backup_iowait`
      }
      if (!is.null(self$`backup_order`)) {
        BackupServiceMasterObject[["backup_order"]] <-
          self$`backup_order`
      }
      return(BackupServiceMasterObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupServiceMaster
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupServiceMaster
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`backup_id`)) {
        self$`backup_id` <- this_object$`backup_id`
      }
      if (!is.null(this_object$`backup_name`)) {
        self$`backup_name` <- this_object$`backup_name`
      }
      if (!is.null(this_object$`backup_ip`)) {
        self$`backup_ip` <- this_object$`backup_ip`
      }
      if (!is.null(this_object$`backup_type`)) {
        self$`backup_type` <- this_object$`backup_type`
      }
      if (!is.null(this_object$`backup_hdsize`)) {
        self$`backup_hdsize` <- this_object$`backup_hdsize`
      }
      if (!is.null(this_object$`backup_hdfree`)) {
        self$`backup_hdfree` <- this_object$`backup_hdfree`
      }
      if (!is.null(this_object$`backup_last_update`)) {
        self$`backup_last_update` <- this_object$`backup_last_update`
      }
      if (!is.null(this_object$`backup_available`)) {
        self$`backup_available` <- this_object$`backup_available`
      }
      if (!is.null(this_object$`backup_iowait`)) {
        self$`backup_iowait` <- this_object$`backup_iowait`
      }
      if (!is.null(this_object$`backup_order`)) {
        self$`backup_order` <- this_object$`backup_order`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BackupServiceMaster in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupServiceMaster
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupServiceMaster
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`backup_id` <- this_object$`backup_id`
      self$`backup_name` <- this_object$`backup_name`
      self$`backup_ip` <- this_object$`backup_ip`
      self$`backup_type` <- this_object$`backup_type`
      self$`backup_hdsize` <- this_object$`backup_hdsize`
      self$`backup_hdfree` <- this_object$`backup_hdfree`
      self$`backup_last_update` <- this_object$`backup_last_update`
      self$`backup_available` <- this_object$`backup_available`
      self$`backup_iowait` <- this_object$`backup_iowait`
      self$`backup_order` <- this_object$`backup_order`
      self
    },

    #' @description
    #' Validate JSON input with respect to BackupServiceMaster and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BackupServiceMaster
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
# BackupServiceMaster$unlock()
#
## Below is an example to define the print function
# BackupServiceMaster$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BackupServiceMaster$lock()

