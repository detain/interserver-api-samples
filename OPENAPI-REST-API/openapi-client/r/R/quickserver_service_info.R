#' Create a new QuickserverServiceInfo
#'
#' @description
#' Core service record for a QuickServer including ID, status, IP, OS, and billing details.
#'
#' @docType class
#' @title QuickserverServiceInfo
#' @description QuickserverServiceInfo Class
#' @format An \code{R6Class} generator object
#' @field qs_id Quickserver ID character [optional]
#' @field qs_custid Customer ID character [optional]
#' @field qs_server Server information character [optional]
#' @field qs_ip IP address character [optional]
#' @field qs_ipv6 IPv6 address (null) character [optional]
#' @field qs_vzid VZ ID character [optional]
#' @field qs_currency Currency character [optional]
#' @field qs_type Type character [optional]
#' @field qs_order_date Order date character [optional]
#' @field qs_status Status character [optional]
#' @field qs_invoice Invoice number character [optional]
#' @field qs_coupon Coupon information character [optional]
#' @field qs_extra Extra information character [optional]
#' @field qs_hostname Hostname character [optional]
#' @field qs_server_status Server status character [optional]
#' @field qs_comment Comment character [optional]
#' @field qs_slices Slices information character [optional]
#' @field qs_vnc VNC information character [optional]
#' @field qs_vnc_port VNC port (null) integer [optional]
#' @field qs_rootpass Root password character [optional]
#' @field qs_mac MAC address character [optional]
#' @field qs_os Operating system character [optional]
#' @field qs_version OS version character [optional]
#' @field qs_location Location character [optional]
#' @field qs_platform Platform (null) character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverServiceInfo <- R6::R6Class(
  "QuickserverServiceInfo",
  public = list(
    `qs_id` = NULL,
    `qs_custid` = NULL,
    `qs_server` = NULL,
    `qs_ip` = NULL,
    `qs_ipv6` = NULL,
    `qs_vzid` = NULL,
    `qs_currency` = NULL,
    `qs_type` = NULL,
    `qs_order_date` = NULL,
    `qs_status` = NULL,
    `qs_invoice` = NULL,
    `qs_coupon` = NULL,
    `qs_extra` = NULL,
    `qs_hostname` = NULL,
    `qs_server_status` = NULL,
    `qs_comment` = NULL,
    `qs_slices` = NULL,
    `qs_vnc` = NULL,
    `qs_vnc_port` = NULL,
    `qs_rootpass` = NULL,
    `qs_mac` = NULL,
    `qs_os` = NULL,
    `qs_version` = NULL,
    `qs_location` = NULL,
    `qs_platform` = NULL,

    #' @description
    #' Initialize a new QuickserverServiceInfo class.
    #'
    #' @param qs_id Quickserver ID
    #' @param qs_custid Customer ID
    #' @param qs_server Server information
    #' @param qs_ip IP address
    #' @param qs_ipv6 IPv6 address (null)
    #' @param qs_vzid VZ ID
    #' @param qs_currency Currency
    #' @param qs_type Type
    #' @param qs_order_date Order date
    #' @param qs_status Status
    #' @param qs_invoice Invoice number
    #' @param qs_coupon Coupon information
    #' @param qs_extra Extra information
    #' @param qs_hostname Hostname
    #' @param qs_server_status Server status
    #' @param qs_comment Comment
    #' @param qs_slices Slices information
    #' @param qs_vnc VNC information
    #' @param qs_vnc_port VNC port (null)
    #' @param qs_rootpass Root password
    #' @param qs_mac MAC address
    #' @param qs_os Operating system
    #' @param qs_version OS version
    #' @param qs_location Location
    #' @param qs_platform Platform (null)
    #' @param ... Other optional arguments.
    initialize = function(`qs_id` = NULL, `qs_custid` = NULL, `qs_server` = NULL, `qs_ip` = NULL, `qs_ipv6` = NULL, `qs_vzid` = NULL, `qs_currency` = NULL, `qs_type` = NULL, `qs_order_date` = NULL, `qs_status` = NULL, `qs_invoice` = NULL, `qs_coupon` = NULL, `qs_extra` = NULL, `qs_hostname` = NULL, `qs_server_status` = NULL, `qs_comment` = NULL, `qs_slices` = NULL, `qs_vnc` = NULL, `qs_vnc_port` = NULL, `qs_rootpass` = NULL, `qs_mac` = NULL, `qs_os` = NULL, `qs_version` = NULL, `qs_location` = NULL, `qs_platform` = NULL, ...) {
      if (!is.null(`qs_id`)) {
        if (!(is.character(`qs_id`) && length(`qs_id`) == 1)) {
          stop(paste("Error! Invalid data for `qs_id`. Must be a string:", `qs_id`))
        }
        self$`qs_id` <- `qs_id`
      }
      if (!is.null(`qs_custid`)) {
        if (!(is.character(`qs_custid`) && length(`qs_custid`) == 1)) {
          stop(paste("Error! Invalid data for `qs_custid`. Must be a string:", `qs_custid`))
        }
        self$`qs_custid` <- `qs_custid`
      }
      if (!is.null(`qs_server`)) {
        if (!(is.character(`qs_server`) && length(`qs_server`) == 1)) {
          stop(paste("Error! Invalid data for `qs_server`. Must be a string:", `qs_server`))
        }
        self$`qs_server` <- `qs_server`
      }
      if (!is.null(`qs_ip`)) {
        if (!(is.character(`qs_ip`) && length(`qs_ip`) == 1)) {
          stop(paste("Error! Invalid data for `qs_ip`. Must be a string:", `qs_ip`))
        }
        self$`qs_ip` <- `qs_ip`
      }
      if (!is.null(`qs_ipv6`)) {
        if (!(is.character(`qs_ipv6`) && length(`qs_ipv6`) == 1)) {
          stop(paste("Error! Invalid data for `qs_ipv6`. Must be a string:", `qs_ipv6`))
        }
        self$`qs_ipv6` <- `qs_ipv6`
      }
      if (!is.null(`qs_vzid`)) {
        if (!(is.character(`qs_vzid`) && length(`qs_vzid`) == 1)) {
          stop(paste("Error! Invalid data for `qs_vzid`. Must be a string:", `qs_vzid`))
        }
        self$`qs_vzid` <- `qs_vzid`
      }
      if (!is.null(`qs_currency`)) {
        if (!(is.character(`qs_currency`) && length(`qs_currency`) == 1)) {
          stop(paste("Error! Invalid data for `qs_currency`. Must be a string:", `qs_currency`))
        }
        self$`qs_currency` <- `qs_currency`
      }
      if (!is.null(`qs_type`)) {
        if (!(is.character(`qs_type`) && length(`qs_type`) == 1)) {
          stop(paste("Error! Invalid data for `qs_type`. Must be a string:", `qs_type`))
        }
        self$`qs_type` <- `qs_type`
      }
      if (!is.null(`qs_order_date`)) {
        if (!(is.character(`qs_order_date`) && length(`qs_order_date`) == 1)) {
          stop(paste("Error! Invalid data for `qs_order_date`. Must be a string:", `qs_order_date`))
        }
        self$`qs_order_date` <- `qs_order_date`
      }
      if (!is.null(`qs_status`)) {
        if (!(is.character(`qs_status`) && length(`qs_status`) == 1)) {
          stop(paste("Error! Invalid data for `qs_status`. Must be a string:", `qs_status`))
        }
        self$`qs_status` <- `qs_status`
      }
      if (!is.null(`qs_invoice`)) {
        if (!(is.character(`qs_invoice`) && length(`qs_invoice`) == 1)) {
          stop(paste("Error! Invalid data for `qs_invoice`. Must be a string:", `qs_invoice`))
        }
        self$`qs_invoice` <- `qs_invoice`
      }
      if (!is.null(`qs_coupon`)) {
        if (!(is.character(`qs_coupon`) && length(`qs_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `qs_coupon`. Must be a string:", `qs_coupon`))
        }
        self$`qs_coupon` <- `qs_coupon`
      }
      if (!is.null(`qs_extra`)) {
        if (!(is.character(`qs_extra`) && length(`qs_extra`) == 1)) {
          stop(paste("Error! Invalid data for `qs_extra`. Must be a string:", `qs_extra`))
        }
        self$`qs_extra` <- `qs_extra`
      }
      if (!is.null(`qs_hostname`)) {
        if (!(is.character(`qs_hostname`) && length(`qs_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `qs_hostname`. Must be a string:", `qs_hostname`))
        }
        self$`qs_hostname` <- `qs_hostname`
      }
      if (!is.null(`qs_server_status`)) {
        if (!(is.character(`qs_server_status`) && length(`qs_server_status`) == 1)) {
          stop(paste("Error! Invalid data for `qs_server_status`. Must be a string:", `qs_server_status`))
        }
        self$`qs_server_status` <- `qs_server_status`
      }
      if (!is.null(`qs_comment`)) {
        if (!(is.character(`qs_comment`) && length(`qs_comment`) == 1)) {
          stop(paste("Error! Invalid data for `qs_comment`. Must be a string:", `qs_comment`))
        }
        self$`qs_comment` <- `qs_comment`
      }
      if (!is.null(`qs_slices`)) {
        if (!(is.character(`qs_slices`) && length(`qs_slices`) == 1)) {
          stop(paste("Error! Invalid data for `qs_slices`. Must be a string:", `qs_slices`))
        }
        self$`qs_slices` <- `qs_slices`
      }
      if (!is.null(`qs_vnc`)) {
        if (!(is.character(`qs_vnc`) && length(`qs_vnc`) == 1)) {
          stop(paste("Error! Invalid data for `qs_vnc`. Must be a string:", `qs_vnc`))
        }
        self$`qs_vnc` <- `qs_vnc`
      }
      if (!is.null(`qs_vnc_port`)) {
        if (!(is.numeric(`qs_vnc_port`) && length(`qs_vnc_port`) == 1)) {
          stop(paste("Error! Invalid data for `qs_vnc_port`. Must be an integer:", `qs_vnc_port`))
        }
        self$`qs_vnc_port` <- `qs_vnc_port`
      }
      if (!is.null(`qs_rootpass`)) {
        if (!(is.character(`qs_rootpass`) && length(`qs_rootpass`) == 1)) {
          stop(paste("Error! Invalid data for `qs_rootpass`. Must be a string:", `qs_rootpass`))
        }
        self$`qs_rootpass` <- `qs_rootpass`
      }
      if (!is.null(`qs_mac`)) {
        if (!(is.character(`qs_mac`) && length(`qs_mac`) == 1)) {
          stop(paste("Error! Invalid data for `qs_mac`. Must be a string:", `qs_mac`))
        }
        self$`qs_mac` <- `qs_mac`
      }
      if (!is.null(`qs_os`)) {
        if (!(is.character(`qs_os`) && length(`qs_os`) == 1)) {
          stop(paste("Error! Invalid data for `qs_os`. Must be a string:", `qs_os`))
        }
        self$`qs_os` <- `qs_os`
      }
      if (!is.null(`qs_version`)) {
        if (!(is.character(`qs_version`) && length(`qs_version`) == 1)) {
          stop(paste("Error! Invalid data for `qs_version`. Must be a string:", `qs_version`))
        }
        self$`qs_version` <- `qs_version`
      }
      if (!is.null(`qs_location`)) {
        if (!(is.character(`qs_location`) && length(`qs_location`) == 1)) {
          stop(paste("Error! Invalid data for `qs_location`. Must be a string:", `qs_location`))
        }
        self$`qs_location` <- `qs_location`
      }
      if (!is.null(`qs_platform`)) {
        if (!(is.character(`qs_platform`) && length(`qs_platform`) == 1)) {
          stop(paste("Error! Invalid data for `qs_platform`. Must be a string:", `qs_platform`))
        }
        self$`qs_platform` <- `qs_platform`
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
    #' @return QuickserverServiceInfo as a base R list.
    #' @examples
    #' # convert array of QuickserverServiceInfo (x) to a data frame
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
    #' Convert QuickserverServiceInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverServiceInfoObject <- list()
      if (!is.null(self$`qs_id`)) {
        QuickserverServiceInfoObject[["qs_id"]] <-
          self$`qs_id`
      }
      if (!is.null(self$`qs_custid`)) {
        QuickserverServiceInfoObject[["qs_custid"]] <-
          self$`qs_custid`
      }
      if (!is.null(self$`qs_server`)) {
        QuickserverServiceInfoObject[["qs_server"]] <-
          self$`qs_server`
      }
      if (!is.null(self$`qs_ip`)) {
        QuickserverServiceInfoObject[["qs_ip"]] <-
          self$`qs_ip`
      }
      if (!is.null(self$`qs_ipv6`)) {
        QuickserverServiceInfoObject[["qs_ipv6"]] <-
          self$`qs_ipv6`
      }
      if (!is.null(self$`qs_vzid`)) {
        QuickserverServiceInfoObject[["qs_vzid"]] <-
          self$`qs_vzid`
      }
      if (!is.null(self$`qs_currency`)) {
        QuickserverServiceInfoObject[["qs_currency"]] <-
          self$`qs_currency`
      }
      if (!is.null(self$`qs_type`)) {
        QuickserverServiceInfoObject[["qs_type"]] <-
          self$`qs_type`
      }
      if (!is.null(self$`qs_order_date`)) {
        QuickserverServiceInfoObject[["qs_order_date"]] <-
          self$`qs_order_date`
      }
      if (!is.null(self$`qs_status`)) {
        QuickserverServiceInfoObject[["qs_status"]] <-
          self$`qs_status`
      }
      if (!is.null(self$`qs_invoice`)) {
        QuickserverServiceInfoObject[["qs_invoice"]] <-
          self$`qs_invoice`
      }
      if (!is.null(self$`qs_coupon`)) {
        QuickserverServiceInfoObject[["qs_coupon"]] <-
          self$`qs_coupon`
      }
      if (!is.null(self$`qs_extra`)) {
        QuickserverServiceInfoObject[["qs_extra"]] <-
          self$`qs_extra`
      }
      if (!is.null(self$`qs_hostname`)) {
        QuickserverServiceInfoObject[["qs_hostname"]] <-
          self$`qs_hostname`
      }
      if (!is.null(self$`qs_server_status`)) {
        QuickserverServiceInfoObject[["qs_server_status"]] <-
          self$`qs_server_status`
      }
      if (!is.null(self$`qs_comment`)) {
        QuickserverServiceInfoObject[["qs_comment"]] <-
          self$`qs_comment`
      }
      if (!is.null(self$`qs_slices`)) {
        QuickserverServiceInfoObject[["qs_slices"]] <-
          self$`qs_slices`
      }
      if (!is.null(self$`qs_vnc`)) {
        QuickserverServiceInfoObject[["qs_vnc"]] <-
          self$`qs_vnc`
      }
      if (!is.null(self$`qs_vnc_port`)) {
        QuickserverServiceInfoObject[["qs_vnc_port"]] <-
          self$`qs_vnc_port`
      }
      if (!is.null(self$`qs_rootpass`)) {
        QuickserverServiceInfoObject[["qs_rootpass"]] <-
          self$`qs_rootpass`
      }
      if (!is.null(self$`qs_mac`)) {
        QuickserverServiceInfoObject[["qs_mac"]] <-
          self$`qs_mac`
      }
      if (!is.null(self$`qs_os`)) {
        QuickserverServiceInfoObject[["qs_os"]] <-
          self$`qs_os`
      }
      if (!is.null(self$`qs_version`)) {
        QuickserverServiceInfoObject[["qs_version"]] <-
          self$`qs_version`
      }
      if (!is.null(self$`qs_location`)) {
        QuickserverServiceInfoObject[["qs_location"]] <-
          self$`qs_location`
      }
      if (!is.null(self$`qs_platform`)) {
        QuickserverServiceInfoObject[["qs_platform"]] <-
          self$`qs_platform`
      }
      return(QuickserverServiceInfoObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverServiceInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`qs_id`)) {
        self$`qs_id` <- this_object$`qs_id`
      }
      if (!is.null(this_object$`qs_custid`)) {
        self$`qs_custid` <- this_object$`qs_custid`
      }
      if (!is.null(this_object$`qs_server`)) {
        self$`qs_server` <- this_object$`qs_server`
      }
      if (!is.null(this_object$`qs_ip`)) {
        self$`qs_ip` <- this_object$`qs_ip`
      }
      if (!is.null(this_object$`qs_ipv6`)) {
        self$`qs_ipv6` <- this_object$`qs_ipv6`
      }
      if (!is.null(this_object$`qs_vzid`)) {
        self$`qs_vzid` <- this_object$`qs_vzid`
      }
      if (!is.null(this_object$`qs_currency`)) {
        self$`qs_currency` <- this_object$`qs_currency`
      }
      if (!is.null(this_object$`qs_type`)) {
        self$`qs_type` <- this_object$`qs_type`
      }
      if (!is.null(this_object$`qs_order_date`)) {
        self$`qs_order_date` <- this_object$`qs_order_date`
      }
      if (!is.null(this_object$`qs_status`)) {
        self$`qs_status` <- this_object$`qs_status`
      }
      if (!is.null(this_object$`qs_invoice`)) {
        self$`qs_invoice` <- this_object$`qs_invoice`
      }
      if (!is.null(this_object$`qs_coupon`)) {
        self$`qs_coupon` <- this_object$`qs_coupon`
      }
      if (!is.null(this_object$`qs_extra`)) {
        self$`qs_extra` <- this_object$`qs_extra`
      }
      if (!is.null(this_object$`qs_hostname`)) {
        self$`qs_hostname` <- this_object$`qs_hostname`
      }
      if (!is.null(this_object$`qs_server_status`)) {
        self$`qs_server_status` <- this_object$`qs_server_status`
      }
      if (!is.null(this_object$`qs_comment`)) {
        self$`qs_comment` <- this_object$`qs_comment`
      }
      if (!is.null(this_object$`qs_slices`)) {
        self$`qs_slices` <- this_object$`qs_slices`
      }
      if (!is.null(this_object$`qs_vnc`)) {
        self$`qs_vnc` <- this_object$`qs_vnc`
      }
      if (!is.null(this_object$`qs_vnc_port`)) {
        self$`qs_vnc_port` <- this_object$`qs_vnc_port`
      }
      if (!is.null(this_object$`qs_rootpass`)) {
        self$`qs_rootpass` <- this_object$`qs_rootpass`
      }
      if (!is.null(this_object$`qs_mac`)) {
        self$`qs_mac` <- this_object$`qs_mac`
      }
      if (!is.null(this_object$`qs_os`)) {
        self$`qs_os` <- this_object$`qs_os`
      }
      if (!is.null(this_object$`qs_version`)) {
        self$`qs_version` <- this_object$`qs_version`
      }
      if (!is.null(this_object$`qs_location`)) {
        self$`qs_location` <- this_object$`qs_location`
      }
      if (!is.null(this_object$`qs_platform`)) {
        self$`qs_platform` <- this_object$`qs_platform`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverServiceInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverServiceInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`qs_id` <- this_object$`qs_id`
      self$`qs_custid` <- this_object$`qs_custid`
      self$`qs_server` <- this_object$`qs_server`
      self$`qs_ip` <- this_object$`qs_ip`
      self$`qs_ipv6` <- this_object$`qs_ipv6`
      self$`qs_vzid` <- this_object$`qs_vzid`
      self$`qs_currency` <- this_object$`qs_currency`
      self$`qs_type` <- this_object$`qs_type`
      self$`qs_order_date` <- this_object$`qs_order_date`
      self$`qs_status` <- this_object$`qs_status`
      self$`qs_invoice` <- this_object$`qs_invoice`
      self$`qs_coupon` <- this_object$`qs_coupon`
      self$`qs_extra` <- this_object$`qs_extra`
      self$`qs_hostname` <- this_object$`qs_hostname`
      self$`qs_server_status` <- this_object$`qs_server_status`
      self$`qs_comment` <- this_object$`qs_comment`
      self$`qs_slices` <- this_object$`qs_slices`
      self$`qs_vnc` <- this_object$`qs_vnc`
      self$`qs_vnc_port` <- this_object$`qs_vnc_port`
      self$`qs_rootpass` <- this_object$`qs_rootpass`
      self$`qs_mac` <- this_object$`qs_mac`
      self$`qs_os` <- this_object$`qs_os`
      self$`qs_version` <- this_object$`qs_version`
      self$`qs_location` <- this_object$`qs_location`
      self$`qs_platform` <- this_object$`qs_platform`
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverServiceInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverServiceInfo
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
# QuickserverServiceInfo$unlock()
#
## Below is an example to define the print function
# QuickserverServiceInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverServiceInfo$lock()

