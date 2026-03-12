#' Create a new BackupServiceInfo
#'
#' @description
#' Core service record for a backup storage service including ID, status, quota, and billing details.
#'
#' @docType class
#' @title BackupServiceInfo
#' @description BackupServiceInfo Class
#' @format An \code{R6Class} generator object
#' @field backup_id Backup ID. character [optional]
#' @field backup_server Backup server ID. character [optional]
#' @field backup_username Backup username. character [optional]
#' @field backup_type Backup type. character [optional]
#' @field backup_currency Backup currency. character [optional]
#' @field backup_order_date Backup order date. character [optional]
#' @field backup_custid Backup customer ID. character [optional]
#' @field backup_quota Backup quota. character [optional]
#' @field backup_ip Backup IP address. character [optional]
#' @field backup_status Backup status. character [optional]
#' @field backup_invoice Backup invoice. character [optional]
#' @field backup_coupon Backup coupon. character [optional]
#' @field backup_extra Backup extra information. character [optional]
#' @field backup_server_status Backup server status. character [optional]
#' @field backup_comment Backup comment. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BackupServiceInfo <- R6::R6Class(
  "BackupServiceInfo",
  public = list(
    `backup_id` = NULL,
    `backup_server` = NULL,
    `backup_username` = NULL,
    `backup_type` = NULL,
    `backup_currency` = NULL,
    `backup_order_date` = NULL,
    `backup_custid` = NULL,
    `backup_quota` = NULL,
    `backup_ip` = NULL,
    `backup_status` = NULL,
    `backup_invoice` = NULL,
    `backup_coupon` = NULL,
    `backup_extra` = NULL,
    `backup_server_status` = NULL,
    `backup_comment` = NULL,

    #' @description
    #' Initialize a new BackupServiceInfo class.
    #'
    #' @param backup_id Backup ID.
    #' @param backup_server Backup server ID.
    #' @param backup_username Backup username.
    #' @param backup_type Backup type.
    #' @param backup_currency Backup currency.
    #' @param backup_order_date Backup order date.
    #' @param backup_custid Backup customer ID.
    #' @param backup_quota Backup quota.
    #' @param backup_ip Backup IP address.
    #' @param backup_status Backup status.
    #' @param backup_invoice Backup invoice.
    #' @param backup_coupon Backup coupon.
    #' @param backup_extra Backup extra information.
    #' @param backup_server_status Backup server status.
    #' @param backup_comment Backup comment.
    #' @param ... Other optional arguments.
    initialize = function(`backup_id` = NULL, `backup_server` = NULL, `backup_username` = NULL, `backup_type` = NULL, `backup_currency` = NULL, `backup_order_date` = NULL, `backup_custid` = NULL, `backup_quota` = NULL, `backup_ip` = NULL, `backup_status` = NULL, `backup_invoice` = NULL, `backup_coupon` = NULL, `backup_extra` = NULL, `backup_server_status` = NULL, `backup_comment` = NULL, ...) {
      if (!is.null(`backup_id`)) {
        if (!(is.character(`backup_id`) && length(`backup_id`) == 1)) {
          stop(paste("Error! Invalid data for `backup_id`. Must be a string:", `backup_id`))
        }
        self$`backup_id` <- `backup_id`
      }
      if (!is.null(`backup_server`)) {
        if (!(is.character(`backup_server`) && length(`backup_server`) == 1)) {
          stop(paste("Error! Invalid data for `backup_server`. Must be a string:", `backup_server`))
        }
        self$`backup_server` <- `backup_server`
      }
      if (!is.null(`backup_username`)) {
        if (!(is.character(`backup_username`) && length(`backup_username`) == 1)) {
          stop(paste("Error! Invalid data for `backup_username`. Must be a string:", `backup_username`))
        }
        self$`backup_username` <- `backup_username`
      }
      if (!is.null(`backup_type`)) {
        if (!(is.character(`backup_type`) && length(`backup_type`) == 1)) {
          stop(paste("Error! Invalid data for `backup_type`. Must be a string:", `backup_type`))
        }
        self$`backup_type` <- `backup_type`
      }
      if (!is.null(`backup_currency`)) {
        if (!(is.character(`backup_currency`) && length(`backup_currency`) == 1)) {
          stop(paste("Error! Invalid data for `backup_currency`. Must be a string:", `backup_currency`))
        }
        self$`backup_currency` <- `backup_currency`
      }
      if (!is.null(`backup_order_date`)) {
        if (!(is.character(`backup_order_date`) && length(`backup_order_date`) == 1)) {
          stop(paste("Error! Invalid data for `backup_order_date`. Must be a string:", `backup_order_date`))
        }
        self$`backup_order_date` <- `backup_order_date`
      }
      if (!is.null(`backup_custid`)) {
        if (!(is.character(`backup_custid`) && length(`backup_custid`) == 1)) {
          stop(paste("Error! Invalid data for `backup_custid`. Must be a string:", `backup_custid`))
        }
        self$`backup_custid` <- `backup_custid`
      }
      if (!is.null(`backup_quota`)) {
        if (!(is.character(`backup_quota`) && length(`backup_quota`) == 1)) {
          stop(paste("Error! Invalid data for `backup_quota`. Must be a string:", `backup_quota`))
        }
        self$`backup_quota` <- `backup_quota`
      }
      if (!is.null(`backup_ip`)) {
        if (!(is.character(`backup_ip`) && length(`backup_ip`) == 1)) {
          stop(paste("Error! Invalid data for `backup_ip`. Must be a string:", `backup_ip`))
        }
        self$`backup_ip` <- `backup_ip`
      }
      if (!is.null(`backup_status`)) {
        if (!(is.character(`backup_status`) && length(`backup_status`) == 1)) {
          stop(paste("Error! Invalid data for `backup_status`. Must be a string:", `backup_status`))
        }
        self$`backup_status` <- `backup_status`
      }
      if (!is.null(`backup_invoice`)) {
        if (!(is.character(`backup_invoice`) && length(`backup_invoice`) == 1)) {
          stop(paste("Error! Invalid data for `backup_invoice`. Must be a string:", `backup_invoice`))
        }
        self$`backup_invoice` <- `backup_invoice`
      }
      if (!is.null(`backup_coupon`)) {
        if (!(is.character(`backup_coupon`) && length(`backup_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `backup_coupon`. Must be a string:", `backup_coupon`))
        }
        self$`backup_coupon` <- `backup_coupon`
      }
      if (!is.null(`backup_extra`)) {
        if (!(is.character(`backup_extra`) && length(`backup_extra`) == 1)) {
          stop(paste("Error! Invalid data for `backup_extra`. Must be a string:", `backup_extra`))
        }
        self$`backup_extra` <- `backup_extra`
      }
      if (!is.null(`backup_server_status`)) {
        if (!(is.character(`backup_server_status`) && length(`backup_server_status`) == 1)) {
          stop(paste("Error! Invalid data for `backup_server_status`. Must be a string:", `backup_server_status`))
        }
        self$`backup_server_status` <- `backup_server_status`
      }
      if (!is.null(`backup_comment`)) {
        if (!(is.character(`backup_comment`) && length(`backup_comment`) == 1)) {
          stop(paste("Error! Invalid data for `backup_comment`. Must be a string:", `backup_comment`))
        }
        self$`backup_comment` <- `backup_comment`
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
    #' @return BackupServiceInfo as a base R list.
    #' @examples
    #' # convert array of BackupServiceInfo (x) to a data frame
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
    #' Convert BackupServiceInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BackupServiceInfoObject <- list()
      if (!is.null(self$`backup_id`)) {
        BackupServiceInfoObject[["backup_id"]] <-
          self$`backup_id`
      }
      if (!is.null(self$`backup_server`)) {
        BackupServiceInfoObject[["backup_server"]] <-
          self$`backup_server`
      }
      if (!is.null(self$`backup_username`)) {
        BackupServiceInfoObject[["backup_username"]] <-
          self$`backup_username`
      }
      if (!is.null(self$`backup_type`)) {
        BackupServiceInfoObject[["backup_type"]] <-
          self$`backup_type`
      }
      if (!is.null(self$`backup_currency`)) {
        BackupServiceInfoObject[["backup_currency"]] <-
          self$`backup_currency`
      }
      if (!is.null(self$`backup_order_date`)) {
        BackupServiceInfoObject[["backup_order_date"]] <-
          self$`backup_order_date`
      }
      if (!is.null(self$`backup_custid`)) {
        BackupServiceInfoObject[["backup_custid"]] <-
          self$`backup_custid`
      }
      if (!is.null(self$`backup_quota`)) {
        BackupServiceInfoObject[["backup_quota"]] <-
          self$`backup_quota`
      }
      if (!is.null(self$`backup_ip`)) {
        BackupServiceInfoObject[["backup_ip"]] <-
          self$`backup_ip`
      }
      if (!is.null(self$`backup_status`)) {
        BackupServiceInfoObject[["backup_status"]] <-
          self$`backup_status`
      }
      if (!is.null(self$`backup_invoice`)) {
        BackupServiceInfoObject[["backup_invoice"]] <-
          self$`backup_invoice`
      }
      if (!is.null(self$`backup_coupon`)) {
        BackupServiceInfoObject[["backup_coupon"]] <-
          self$`backup_coupon`
      }
      if (!is.null(self$`backup_extra`)) {
        BackupServiceInfoObject[["backup_extra"]] <-
          self$`backup_extra`
      }
      if (!is.null(self$`backup_server_status`)) {
        BackupServiceInfoObject[["backup_server_status"]] <-
          self$`backup_server_status`
      }
      if (!is.null(self$`backup_comment`)) {
        BackupServiceInfoObject[["backup_comment"]] <-
          self$`backup_comment`
      }
      return(BackupServiceInfoObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupServiceInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`backup_id`)) {
        self$`backup_id` <- this_object$`backup_id`
      }
      if (!is.null(this_object$`backup_server`)) {
        self$`backup_server` <- this_object$`backup_server`
      }
      if (!is.null(this_object$`backup_username`)) {
        self$`backup_username` <- this_object$`backup_username`
      }
      if (!is.null(this_object$`backup_type`)) {
        self$`backup_type` <- this_object$`backup_type`
      }
      if (!is.null(this_object$`backup_currency`)) {
        self$`backup_currency` <- this_object$`backup_currency`
      }
      if (!is.null(this_object$`backup_order_date`)) {
        self$`backup_order_date` <- this_object$`backup_order_date`
      }
      if (!is.null(this_object$`backup_custid`)) {
        self$`backup_custid` <- this_object$`backup_custid`
      }
      if (!is.null(this_object$`backup_quota`)) {
        self$`backup_quota` <- this_object$`backup_quota`
      }
      if (!is.null(this_object$`backup_ip`)) {
        self$`backup_ip` <- this_object$`backup_ip`
      }
      if (!is.null(this_object$`backup_status`)) {
        self$`backup_status` <- this_object$`backup_status`
      }
      if (!is.null(this_object$`backup_invoice`)) {
        self$`backup_invoice` <- this_object$`backup_invoice`
      }
      if (!is.null(this_object$`backup_coupon`)) {
        self$`backup_coupon` <- this_object$`backup_coupon`
      }
      if (!is.null(this_object$`backup_extra`)) {
        self$`backup_extra` <- this_object$`backup_extra`
      }
      if (!is.null(this_object$`backup_server_status`)) {
        self$`backup_server_status` <- this_object$`backup_server_status`
      }
      if (!is.null(this_object$`backup_comment`)) {
        self$`backup_comment` <- this_object$`backup_comment`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BackupServiceInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupServiceInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`backup_id` <- this_object$`backup_id`
      self$`backup_server` <- this_object$`backup_server`
      self$`backup_username` <- this_object$`backup_username`
      self$`backup_type` <- this_object$`backup_type`
      self$`backup_currency` <- this_object$`backup_currency`
      self$`backup_order_date` <- this_object$`backup_order_date`
      self$`backup_custid` <- this_object$`backup_custid`
      self$`backup_quota` <- this_object$`backup_quota`
      self$`backup_ip` <- this_object$`backup_ip`
      self$`backup_status` <- this_object$`backup_status`
      self$`backup_invoice` <- this_object$`backup_invoice`
      self$`backup_coupon` <- this_object$`backup_coupon`
      self$`backup_extra` <- this_object$`backup_extra`
      self$`backup_server_status` <- this_object$`backup_server_status`
      self$`backup_comment` <- this_object$`backup_comment`
      self
    },

    #' @description
    #' Validate JSON input with respect to BackupServiceInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BackupServiceInfo
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
# BackupServiceInfo$unlock()
#
## Below is an example to define the print function
# BackupServiceInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BackupServiceInfo$lock()

