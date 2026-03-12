#' Create a new VpsServiceInfo
#'
#' @description
#' VpsServiceInfo Class
#'
#' @docType class
#' @title VpsServiceInfo
#' @description VpsServiceInfo Class
#' @format An \code{R6Class} generator object
#' @field vps_id VPS ID character [optional]
#' @field vps_custid Customer ID character [optional]
#' @field vps_server Server ID character [optional]
#' @field vps_ip IP address of the VPS character [optional]
#' @field vps_ipv6 IPv6 address of the VPS \link{AnyType} [optional]
#' @field vps_vzid VPS Virtuozzo ID character [optional]
#' @field vps_currency Currency used for billing character [optional]
#' @field vps_type VPS type character [optional]
#' @field vps_order_date Date of VPS order character [optional]
#' @field vps_status VPS status character [optional]
#' @field vps_invoice VPS invoice number character [optional]
#' @field vps_coupon VPS coupon code character [optional]
#' @field vps_extra Additional information about the VPS character [optional]
#' @field vps_hostname VPS hostname character [optional]
#' @field vps_server_status Status of the VPS server character [optional]
#' @field vps_comment Comment associated with the VPS character [optional]
#' @field vps_slices Number of VPS slices character [optional]
#' @field vps_vnc VNC address character [optional]
#' @field vps_vnc_port VNC port character [optional]
#' @field vps_rootpass Root password of the VPS character [optional]
#' @field vps_mac MAC address of the VPS character [optional]
#' @field vps_os Operating system of the VPS character [optional]
#' @field vps_version Version of the operating system character [optional]
#' @field vps_location Location of the VPS character [optional]
#' @field vps_platform Virtualization platform character [optional]
#' @field vps_diskused Amount of disk space used character [optional]
#' @field vps_diskmax Maximum disk space available character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsServiceInfo <- R6::R6Class(
  "VpsServiceInfo",
  public = list(
    `vps_id` = NULL,
    `vps_custid` = NULL,
    `vps_server` = NULL,
    `vps_ip` = NULL,
    `vps_ipv6` = NULL,
    `vps_vzid` = NULL,
    `vps_currency` = NULL,
    `vps_type` = NULL,
    `vps_order_date` = NULL,
    `vps_status` = NULL,
    `vps_invoice` = NULL,
    `vps_coupon` = NULL,
    `vps_extra` = NULL,
    `vps_hostname` = NULL,
    `vps_server_status` = NULL,
    `vps_comment` = NULL,
    `vps_slices` = NULL,
    `vps_vnc` = NULL,
    `vps_vnc_port` = NULL,
    `vps_rootpass` = NULL,
    `vps_mac` = NULL,
    `vps_os` = NULL,
    `vps_version` = NULL,
    `vps_location` = NULL,
    `vps_platform` = NULL,
    `vps_diskused` = NULL,
    `vps_diskmax` = NULL,

    #' @description
    #' Initialize a new VpsServiceInfo class.
    #'
    #' @param vps_id VPS ID
    #' @param vps_custid Customer ID
    #' @param vps_server Server ID
    #' @param vps_ip IP address of the VPS
    #' @param vps_ipv6 IPv6 address of the VPS
    #' @param vps_vzid VPS Virtuozzo ID
    #' @param vps_currency Currency used for billing
    #' @param vps_type VPS type
    #' @param vps_order_date Date of VPS order
    #' @param vps_status VPS status
    #' @param vps_invoice VPS invoice number
    #' @param vps_coupon VPS coupon code
    #' @param vps_extra Additional information about the VPS
    #' @param vps_hostname VPS hostname
    #' @param vps_server_status Status of the VPS server
    #' @param vps_comment Comment associated with the VPS
    #' @param vps_slices Number of VPS slices
    #' @param vps_vnc VNC address
    #' @param vps_vnc_port VNC port
    #' @param vps_rootpass Root password of the VPS
    #' @param vps_mac MAC address of the VPS
    #' @param vps_os Operating system of the VPS
    #' @param vps_version Version of the operating system
    #' @param vps_location Location of the VPS
    #' @param vps_platform Virtualization platform
    #' @param vps_diskused Amount of disk space used
    #' @param vps_diskmax Maximum disk space available
    #' @param ... Other optional arguments.
    initialize = function(`vps_id` = NULL, `vps_custid` = NULL, `vps_server` = NULL, `vps_ip` = NULL, `vps_ipv6` = NULL, `vps_vzid` = NULL, `vps_currency` = NULL, `vps_type` = NULL, `vps_order_date` = NULL, `vps_status` = NULL, `vps_invoice` = NULL, `vps_coupon` = NULL, `vps_extra` = NULL, `vps_hostname` = NULL, `vps_server_status` = NULL, `vps_comment` = NULL, `vps_slices` = NULL, `vps_vnc` = NULL, `vps_vnc_port` = NULL, `vps_rootpass` = NULL, `vps_mac` = NULL, `vps_os` = NULL, `vps_version` = NULL, `vps_location` = NULL, `vps_platform` = NULL, `vps_diskused` = NULL, `vps_diskmax` = NULL, ...) {
      if (!is.null(`vps_id`)) {
        if (!(is.character(`vps_id`) && length(`vps_id`) == 1)) {
          stop(paste("Error! Invalid data for `vps_id`. Must be a string:", `vps_id`))
        }
        self$`vps_id` <- `vps_id`
      }
      if (!is.null(`vps_custid`)) {
        if (!(is.character(`vps_custid`) && length(`vps_custid`) == 1)) {
          stop(paste("Error! Invalid data for `vps_custid`. Must be a string:", `vps_custid`))
        }
        self$`vps_custid` <- `vps_custid`
      }
      if (!is.null(`vps_server`)) {
        if (!(is.character(`vps_server`) && length(`vps_server`) == 1)) {
          stop(paste("Error! Invalid data for `vps_server`. Must be a string:", `vps_server`))
        }
        self$`vps_server` <- `vps_server`
      }
      if (!is.null(`vps_ip`)) {
        if (!(is.character(`vps_ip`) && length(`vps_ip`) == 1)) {
          stop(paste("Error! Invalid data for `vps_ip`. Must be a string:", `vps_ip`))
        }
        self$`vps_ip` <- `vps_ip`
      }
      if (!is.null(`vps_ipv6`)) {
        stopifnot(R6::is.R6(`vps_ipv6`))
        self$`vps_ipv6` <- `vps_ipv6`
      }
      if (!is.null(`vps_vzid`)) {
        if (!(is.character(`vps_vzid`) && length(`vps_vzid`) == 1)) {
          stop(paste("Error! Invalid data for `vps_vzid`. Must be a string:", `vps_vzid`))
        }
        self$`vps_vzid` <- `vps_vzid`
      }
      if (!is.null(`vps_currency`)) {
        if (!(is.character(`vps_currency`) && length(`vps_currency`) == 1)) {
          stop(paste("Error! Invalid data for `vps_currency`. Must be a string:", `vps_currency`))
        }
        self$`vps_currency` <- `vps_currency`
      }
      if (!is.null(`vps_type`)) {
        if (!(is.character(`vps_type`) && length(`vps_type`) == 1)) {
          stop(paste("Error! Invalid data for `vps_type`. Must be a string:", `vps_type`))
        }
        self$`vps_type` <- `vps_type`
      }
      if (!is.null(`vps_order_date`)) {
        if (!(is.character(`vps_order_date`) && length(`vps_order_date`) == 1)) {
          stop(paste("Error! Invalid data for `vps_order_date`. Must be a string:", `vps_order_date`))
        }
        self$`vps_order_date` <- `vps_order_date`
      }
      if (!is.null(`vps_status`)) {
        if (!(is.character(`vps_status`) && length(`vps_status`) == 1)) {
          stop(paste("Error! Invalid data for `vps_status`. Must be a string:", `vps_status`))
        }
        self$`vps_status` <- `vps_status`
      }
      if (!is.null(`vps_invoice`)) {
        if (!(is.character(`vps_invoice`) && length(`vps_invoice`) == 1)) {
          stop(paste("Error! Invalid data for `vps_invoice`. Must be a string:", `vps_invoice`))
        }
        self$`vps_invoice` <- `vps_invoice`
      }
      if (!is.null(`vps_coupon`)) {
        if (!(is.character(`vps_coupon`) && length(`vps_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `vps_coupon`. Must be a string:", `vps_coupon`))
        }
        self$`vps_coupon` <- `vps_coupon`
      }
      if (!is.null(`vps_extra`)) {
        if (!(is.character(`vps_extra`) && length(`vps_extra`) == 1)) {
          stop(paste("Error! Invalid data for `vps_extra`. Must be a string:", `vps_extra`))
        }
        self$`vps_extra` <- `vps_extra`
      }
      if (!is.null(`vps_hostname`)) {
        if (!(is.character(`vps_hostname`) && length(`vps_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `vps_hostname`. Must be a string:", `vps_hostname`))
        }
        self$`vps_hostname` <- `vps_hostname`
      }
      if (!is.null(`vps_server_status`)) {
        if (!(is.character(`vps_server_status`) && length(`vps_server_status`) == 1)) {
          stop(paste("Error! Invalid data for `vps_server_status`. Must be a string:", `vps_server_status`))
        }
        self$`vps_server_status` <- `vps_server_status`
      }
      if (!is.null(`vps_comment`)) {
        if (!(is.character(`vps_comment`) && length(`vps_comment`) == 1)) {
          stop(paste("Error! Invalid data for `vps_comment`. Must be a string:", `vps_comment`))
        }
        self$`vps_comment` <- `vps_comment`
      }
      if (!is.null(`vps_slices`)) {
        if (!(is.character(`vps_slices`) && length(`vps_slices`) == 1)) {
          stop(paste("Error! Invalid data for `vps_slices`. Must be a string:", `vps_slices`))
        }
        self$`vps_slices` <- `vps_slices`
      }
      if (!is.null(`vps_vnc`)) {
        if (!(is.character(`vps_vnc`) && length(`vps_vnc`) == 1)) {
          stop(paste("Error! Invalid data for `vps_vnc`. Must be a string:", `vps_vnc`))
        }
        self$`vps_vnc` <- `vps_vnc`
      }
      if (!is.null(`vps_vnc_port`)) {
        if (!(is.character(`vps_vnc_port`) && length(`vps_vnc_port`) == 1)) {
          stop(paste("Error! Invalid data for `vps_vnc_port`. Must be a string:", `vps_vnc_port`))
        }
        self$`vps_vnc_port` <- `vps_vnc_port`
      }
      if (!is.null(`vps_rootpass`)) {
        if (!(is.character(`vps_rootpass`) && length(`vps_rootpass`) == 1)) {
          stop(paste("Error! Invalid data for `vps_rootpass`. Must be a string:", `vps_rootpass`))
        }
        self$`vps_rootpass` <- `vps_rootpass`
      }
      if (!is.null(`vps_mac`)) {
        if (!(is.character(`vps_mac`) && length(`vps_mac`) == 1)) {
          stop(paste("Error! Invalid data for `vps_mac`. Must be a string:", `vps_mac`))
        }
        self$`vps_mac` <- `vps_mac`
      }
      if (!is.null(`vps_os`)) {
        if (!(is.character(`vps_os`) && length(`vps_os`) == 1)) {
          stop(paste("Error! Invalid data for `vps_os`. Must be a string:", `vps_os`))
        }
        self$`vps_os` <- `vps_os`
      }
      if (!is.null(`vps_version`)) {
        if (!(is.character(`vps_version`) && length(`vps_version`) == 1)) {
          stop(paste("Error! Invalid data for `vps_version`. Must be a string:", `vps_version`))
        }
        self$`vps_version` <- `vps_version`
      }
      if (!is.null(`vps_location`)) {
        if (!(is.character(`vps_location`) && length(`vps_location`) == 1)) {
          stop(paste("Error! Invalid data for `vps_location`. Must be a string:", `vps_location`))
        }
        self$`vps_location` <- `vps_location`
      }
      if (!is.null(`vps_platform`)) {
        if (!(is.character(`vps_platform`) && length(`vps_platform`) == 1)) {
          stop(paste("Error! Invalid data for `vps_platform`. Must be a string:", `vps_platform`))
        }
        self$`vps_platform` <- `vps_platform`
      }
      if (!is.null(`vps_diskused`)) {
        if (!(is.character(`vps_diskused`) && length(`vps_diskused`) == 1)) {
          stop(paste("Error! Invalid data for `vps_diskused`. Must be a string:", `vps_diskused`))
        }
        self$`vps_diskused` <- `vps_diskused`
      }
      if (!is.null(`vps_diskmax`)) {
        if (!(is.character(`vps_diskmax`) && length(`vps_diskmax`) == 1)) {
          stop(paste("Error! Invalid data for `vps_diskmax`. Must be a string:", `vps_diskmax`))
        }
        self$`vps_diskmax` <- `vps_diskmax`
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
    #' @return VpsServiceInfo as a base R list.
    #' @examples
    #' # convert array of VpsServiceInfo (x) to a data frame
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
    #' Convert VpsServiceInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsServiceInfoObject <- list()
      if (!is.null(self$`vps_id`)) {
        VpsServiceInfoObject[["vps_id"]] <-
          self$`vps_id`
      }
      if (!is.null(self$`vps_custid`)) {
        VpsServiceInfoObject[["vps_custid"]] <-
          self$`vps_custid`
      }
      if (!is.null(self$`vps_server`)) {
        VpsServiceInfoObject[["vps_server"]] <-
          self$`vps_server`
      }
      if (!is.null(self$`vps_ip`)) {
        VpsServiceInfoObject[["vps_ip"]] <-
          self$`vps_ip`
      }
      if (!is.null(self$`vps_ipv6`)) {
        VpsServiceInfoObject[["vps_ipv6"]] <-
          self$extractSimpleType(self$`vps_ipv6`)
      }
      if (!is.null(self$`vps_vzid`)) {
        VpsServiceInfoObject[["vps_vzid"]] <-
          self$`vps_vzid`
      }
      if (!is.null(self$`vps_currency`)) {
        VpsServiceInfoObject[["vps_currency"]] <-
          self$`vps_currency`
      }
      if (!is.null(self$`vps_type`)) {
        VpsServiceInfoObject[["vps_type"]] <-
          self$`vps_type`
      }
      if (!is.null(self$`vps_order_date`)) {
        VpsServiceInfoObject[["vps_order_date"]] <-
          self$`vps_order_date`
      }
      if (!is.null(self$`vps_status`)) {
        VpsServiceInfoObject[["vps_status"]] <-
          self$`vps_status`
      }
      if (!is.null(self$`vps_invoice`)) {
        VpsServiceInfoObject[["vps_invoice"]] <-
          self$`vps_invoice`
      }
      if (!is.null(self$`vps_coupon`)) {
        VpsServiceInfoObject[["vps_coupon"]] <-
          self$`vps_coupon`
      }
      if (!is.null(self$`vps_extra`)) {
        VpsServiceInfoObject[["vps_extra"]] <-
          self$`vps_extra`
      }
      if (!is.null(self$`vps_hostname`)) {
        VpsServiceInfoObject[["vps_hostname"]] <-
          self$`vps_hostname`
      }
      if (!is.null(self$`vps_server_status`)) {
        VpsServiceInfoObject[["vps_server_status"]] <-
          self$`vps_server_status`
      }
      if (!is.null(self$`vps_comment`)) {
        VpsServiceInfoObject[["vps_comment"]] <-
          self$`vps_comment`
      }
      if (!is.null(self$`vps_slices`)) {
        VpsServiceInfoObject[["vps_slices"]] <-
          self$`vps_slices`
      }
      if (!is.null(self$`vps_vnc`)) {
        VpsServiceInfoObject[["vps_vnc"]] <-
          self$`vps_vnc`
      }
      if (!is.null(self$`vps_vnc_port`)) {
        VpsServiceInfoObject[["vps_vnc_port"]] <-
          self$`vps_vnc_port`
      }
      if (!is.null(self$`vps_rootpass`)) {
        VpsServiceInfoObject[["vps_rootpass"]] <-
          self$`vps_rootpass`
      }
      if (!is.null(self$`vps_mac`)) {
        VpsServiceInfoObject[["vps_mac"]] <-
          self$`vps_mac`
      }
      if (!is.null(self$`vps_os`)) {
        VpsServiceInfoObject[["vps_os"]] <-
          self$`vps_os`
      }
      if (!is.null(self$`vps_version`)) {
        VpsServiceInfoObject[["vps_version"]] <-
          self$`vps_version`
      }
      if (!is.null(self$`vps_location`)) {
        VpsServiceInfoObject[["vps_location"]] <-
          self$`vps_location`
      }
      if (!is.null(self$`vps_platform`)) {
        VpsServiceInfoObject[["vps_platform"]] <-
          self$`vps_platform`
      }
      if (!is.null(self$`vps_diskused`)) {
        VpsServiceInfoObject[["vps_diskused"]] <-
          self$`vps_diskused`
      }
      if (!is.null(self$`vps_diskmax`)) {
        VpsServiceInfoObject[["vps_diskmax"]] <-
          self$`vps_diskmax`
      }
      return(VpsServiceInfoObject)
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
    #' Deserialize JSON string into an instance of VpsServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsServiceInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`vps_id`)) {
        self$`vps_id` <- this_object$`vps_id`
      }
      if (!is.null(this_object$`vps_custid`)) {
        self$`vps_custid` <- this_object$`vps_custid`
      }
      if (!is.null(this_object$`vps_server`)) {
        self$`vps_server` <- this_object$`vps_server`
      }
      if (!is.null(this_object$`vps_ip`)) {
        self$`vps_ip` <- this_object$`vps_ip`
      }
      if (!is.null(this_object$`vps_ipv6`)) {
        `vps_ipv6_object` <- AnyType$new()
        `vps_ipv6_object`$fromJSON(jsonlite::toJSON(this_object$`vps_ipv6`, auto_unbox = TRUE, digits = NA))
        self$`vps_ipv6` <- `vps_ipv6_object`
      }
      if (!is.null(this_object$`vps_vzid`)) {
        self$`vps_vzid` <- this_object$`vps_vzid`
      }
      if (!is.null(this_object$`vps_currency`)) {
        self$`vps_currency` <- this_object$`vps_currency`
      }
      if (!is.null(this_object$`vps_type`)) {
        self$`vps_type` <- this_object$`vps_type`
      }
      if (!is.null(this_object$`vps_order_date`)) {
        self$`vps_order_date` <- this_object$`vps_order_date`
      }
      if (!is.null(this_object$`vps_status`)) {
        self$`vps_status` <- this_object$`vps_status`
      }
      if (!is.null(this_object$`vps_invoice`)) {
        self$`vps_invoice` <- this_object$`vps_invoice`
      }
      if (!is.null(this_object$`vps_coupon`)) {
        self$`vps_coupon` <- this_object$`vps_coupon`
      }
      if (!is.null(this_object$`vps_extra`)) {
        self$`vps_extra` <- this_object$`vps_extra`
      }
      if (!is.null(this_object$`vps_hostname`)) {
        self$`vps_hostname` <- this_object$`vps_hostname`
      }
      if (!is.null(this_object$`vps_server_status`)) {
        self$`vps_server_status` <- this_object$`vps_server_status`
      }
      if (!is.null(this_object$`vps_comment`)) {
        self$`vps_comment` <- this_object$`vps_comment`
      }
      if (!is.null(this_object$`vps_slices`)) {
        self$`vps_slices` <- this_object$`vps_slices`
      }
      if (!is.null(this_object$`vps_vnc`)) {
        self$`vps_vnc` <- this_object$`vps_vnc`
      }
      if (!is.null(this_object$`vps_vnc_port`)) {
        self$`vps_vnc_port` <- this_object$`vps_vnc_port`
      }
      if (!is.null(this_object$`vps_rootpass`)) {
        self$`vps_rootpass` <- this_object$`vps_rootpass`
      }
      if (!is.null(this_object$`vps_mac`)) {
        self$`vps_mac` <- this_object$`vps_mac`
      }
      if (!is.null(this_object$`vps_os`)) {
        self$`vps_os` <- this_object$`vps_os`
      }
      if (!is.null(this_object$`vps_version`)) {
        self$`vps_version` <- this_object$`vps_version`
      }
      if (!is.null(this_object$`vps_location`)) {
        self$`vps_location` <- this_object$`vps_location`
      }
      if (!is.null(this_object$`vps_platform`)) {
        self$`vps_platform` <- this_object$`vps_platform`
      }
      if (!is.null(this_object$`vps_diskused`)) {
        self$`vps_diskused` <- this_object$`vps_diskused`
      }
      if (!is.null(this_object$`vps_diskmax`)) {
        self$`vps_diskmax` <- this_object$`vps_diskmax`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsServiceInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsServiceInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`vps_id` <- this_object$`vps_id`
      self$`vps_custid` <- this_object$`vps_custid`
      self$`vps_server` <- this_object$`vps_server`
      self$`vps_ip` <- this_object$`vps_ip`
      self$`vps_ipv6` <- AnyType$new()$fromJSON(jsonlite::toJSON(this_object$`vps_ipv6`, auto_unbox = TRUE, digits = NA))
      self$`vps_vzid` <- this_object$`vps_vzid`
      self$`vps_currency` <- this_object$`vps_currency`
      self$`vps_type` <- this_object$`vps_type`
      self$`vps_order_date` <- this_object$`vps_order_date`
      self$`vps_status` <- this_object$`vps_status`
      self$`vps_invoice` <- this_object$`vps_invoice`
      self$`vps_coupon` <- this_object$`vps_coupon`
      self$`vps_extra` <- this_object$`vps_extra`
      self$`vps_hostname` <- this_object$`vps_hostname`
      self$`vps_server_status` <- this_object$`vps_server_status`
      self$`vps_comment` <- this_object$`vps_comment`
      self$`vps_slices` <- this_object$`vps_slices`
      self$`vps_vnc` <- this_object$`vps_vnc`
      self$`vps_vnc_port` <- this_object$`vps_vnc_port`
      self$`vps_rootpass` <- this_object$`vps_rootpass`
      self$`vps_mac` <- this_object$`vps_mac`
      self$`vps_os` <- this_object$`vps_os`
      self$`vps_version` <- this_object$`vps_version`
      self$`vps_location` <- this_object$`vps_location`
      self$`vps_platform` <- this_object$`vps_platform`
      self$`vps_diskused` <- this_object$`vps_diskused`
      self$`vps_diskmax` <- this_object$`vps_diskmax`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsServiceInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsServiceInfo
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
# VpsServiceInfo$unlock()
#
## Below is an example to define the print function
# VpsServiceInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsServiceInfo$lock()

