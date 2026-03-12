#' Create a new ServerServiceInfo
#'
#' @description
#' ServerServiceInfo Class
#'
#' @docType class
#' @title ServerServiceInfo
#' @description ServerServiceInfo Class
#' @format An \code{R6Class} generator object
#' @field server_id The ID of the server. character [optional]
#' @field server_hostname The hostname of the server. character [optional]
#' @field server_custid The customer ID associated with the server. character [optional]
#' @field server_type The type of the server. character [optional]
#' @field server_currency The currency used for billing. character [optional]
#' @field server_order_date The date when the server was ordered. character [optional]
#' @field server_invoice The invoice number for the server. character [optional]
#' @field server_coupon The coupon associated with the server. character [optional]
#' @field server_status The status of the server. character [optional]
#' @field server_root The root of the server. character [optional]
#' @field server_dedicated_tag The dedicated tag of the server. character [optional]
#' @field server_custom_tag The custom tag of the server. character [optional]
#' @field server_comment Comments related to the server. character [optional]
#' @field server_initial_bill The initial billing amount for the server. character [optional]
#' @field server_hardware The hardware information of the server. character [optional]
#' @field server_ips The number of IPs associated with the server. character [optional]
#' @field server_monthly_bill The monthly billing amount for the server. character [optional]
#' @field server_setup The setup status of the server. character [optional]
#' @field server_discount Discount information for the server. \link{AnyType} [optional]
#' @field server_rep The reputation of the server. character [optional]
#' @field server_date The date related to the server. character [optional]
#' @field server_total_cost The total cost of the server. character [optional]
#' @field server_location The location of the server. \link{AnyType} [optional]
#' @field server_hardware_ordered The ordered hardware for the server. character [optional]
#' @field server_billed The billed amount for the server. character [optional]
#' @field server_welcome_email Indicates whether a welcome email was sent. character [optional]
#' @field server_dedicated_cpu The number of dedicated CPUs for the server. character [optional]
#' @field server_dedicated_memory The amount of dedicated memory for the server. character [optional]
#' @field server_dedicated_hd1 The size of the first dedicated hard drive. character [optional]
#' @field server_dedicated_hd2 The size of the second dedicated hard drive. \link{AnyType} [optional]
#' @field server_dedicated_bandwidth The bandwidth of the server. character [optional]
#' @field server_dedicated_ips The number of dedicated IPs for the server. character [optional]
#' @field server_dedicated_os The operating system of the server. character [optional]
#' @field server_dedicated_cp The control panel of the server. \link{AnyType} [optional]
#' @field server_dedicated_raid The RAID configuration of the server. character [optional]
#' @field server_extra Additional information about the server. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerServiceInfo <- R6::R6Class(
  "ServerServiceInfo",
  public = list(
    `server_id` = NULL,
    `server_hostname` = NULL,
    `server_custid` = NULL,
    `server_type` = NULL,
    `server_currency` = NULL,
    `server_order_date` = NULL,
    `server_invoice` = NULL,
    `server_coupon` = NULL,
    `server_status` = NULL,
    `server_root` = NULL,
    `server_dedicated_tag` = NULL,
    `server_custom_tag` = NULL,
    `server_comment` = NULL,
    `server_initial_bill` = NULL,
    `server_hardware` = NULL,
    `server_ips` = NULL,
    `server_monthly_bill` = NULL,
    `server_setup` = NULL,
    `server_discount` = NULL,
    `server_rep` = NULL,
    `server_date` = NULL,
    `server_total_cost` = NULL,
    `server_location` = NULL,
    `server_hardware_ordered` = NULL,
    `server_billed` = NULL,
    `server_welcome_email` = NULL,
    `server_dedicated_cpu` = NULL,
    `server_dedicated_memory` = NULL,
    `server_dedicated_hd1` = NULL,
    `server_dedicated_hd2` = NULL,
    `server_dedicated_bandwidth` = NULL,
    `server_dedicated_ips` = NULL,
    `server_dedicated_os` = NULL,
    `server_dedicated_cp` = NULL,
    `server_dedicated_raid` = NULL,
    `server_extra` = NULL,

    #' @description
    #' Initialize a new ServerServiceInfo class.
    #'
    #' @param server_id The ID of the server.
    #' @param server_hostname The hostname of the server.
    #' @param server_custid The customer ID associated with the server.
    #' @param server_type The type of the server.
    #' @param server_currency The currency used for billing.
    #' @param server_order_date The date when the server was ordered.
    #' @param server_invoice The invoice number for the server.
    #' @param server_coupon The coupon associated with the server.
    #' @param server_status The status of the server.
    #' @param server_root The root of the server.
    #' @param server_dedicated_tag The dedicated tag of the server.
    #' @param server_custom_tag The custom tag of the server.
    #' @param server_comment Comments related to the server.
    #' @param server_initial_bill The initial billing amount for the server.
    #' @param server_hardware The hardware information of the server.
    #' @param server_ips The number of IPs associated with the server.
    #' @param server_monthly_bill The monthly billing amount for the server.
    #' @param server_setup The setup status of the server.
    #' @param server_discount Discount information for the server.
    #' @param server_rep The reputation of the server.
    #' @param server_date The date related to the server.
    #' @param server_total_cost The total cost of the server.
    #' @param server_location The location of the server.
    #' @param server_hardware_ordered The ordered hardware for the server.
    #' @param server_billed The billed amount for the server.
    #' @param server_welcome_email Indicates whether a welcome email was sent.
    #' @param server_dedicated_cpu The number of dedicated CPUs for the server.
    #' @param server_dedicated_memory The amount of dedicated memory for the server.
    #' @param server_dedicated_hd1 The size of the first dedicated hard drive.
    #' @param server_dedicated_hd2 The size of the second dedicated hard drive.
    #' @param server_dedicated_bandwidth The bandwidth of the server.
    #' @param server_dedicated_ips The number of dedicated IPs for the server.
    #' @param server_dedicated_os The operating system of the server.
    #' @param server_dedicated_cp The control panel of the server.
    #' @param server_dedicated_raid The RAID configuration of the server.
    #' @param server_extra Additional information about the server.
    #' @param ... Other optional arguments.
    initialize = function(`server_id` = NULL, `server_hostname` = NULL, `server_custid` = NULL, `server_type` = NULL, `server_currency` = NULL, `server_order_date` = NULL, `server_invoice` = NULL, `server_coupon` = NULL, `server_status` = NULL, `server_root` = NULL, `server_dedicated_tag` = NULL, `server_custom_tag` = NULL, `server_comment` = NULL, `server_initial_bill` = NULL, `server_hardware` = NULL, `server_ips` = NULL, `server_monthly_bill` = NULL, `server_setup` = NULL, `server_discount` = NULL, `server_rep` = NULL, `server_date` = NULL, `server_total_cost` = NULL, `server_location` = NULL, `server_hardware_ordered` = NULL, `server_billed` = NULL, `server_welcome_email` = NULL, `server_dedicated_cpu` = NULL, `server_dedicated_memory` = NULL, `server_dedicated_hd1` = NULL, `server_dedicated_hd2` = NULL, `server_dedicated_bandwidth` = NULL, `server_dedicated_ips` = NULL, `server_dedicated_os` = NULL, `server_dedicated_cp` = NULL, `server_dedicated_raid` = NULL, `server_extra` = NULL, ...) {
      if (!is.null(`server_id`)) {
        if (!(is.character(`server_id`) && length(`server_id`) == 1)) {
          stop(paste("Error! Invalid data for `server_id`. Must be a string:", `server_id`))
        }
        self$`server_id` <- `server_id`
      }
      if (!is.null(`server_hostname`)) {
        if (!(is.character(`server_hostname`) && length(`server_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `server_hostname`. Must be a string:", `server_hostname`))
        }
        self$`server_hostname` <- `server_hostname`
      }
      if (!is.null(`server_custid`)) {
        if (!(is.character(`server_custid`) && length(`server_custid`) == 1)) {
          stop(paste("Error! Invalid data for `server_custid`. Must be a string:", `server_custid`))
        }
        self$`server_custid` <- `server_custid`
      }
      if (!is.null(`server_type`)) {
        if (!(is.character(`server_type`) && length(`server_type`) == 1)) {
          stop(paste("Error! Invalid data for `server_type`. Must be a string:", `server_type`))
        }
        self$`server_type` <- `server_type`
      }
      if (!is.null(`server_currency`)) {
        if (!(is.character(`server_currency`) && length(`server_currency`) == 1)) {
          stop(paste("Error! Invalid data for `server_currency`. Must be a string:", `server_currency`))
        }
        self$`server_currency` <- `server_currency`
      }
      if (!is.null(`server_order_date`)) {
        if (!(is.character(`server_order_date`) && length(`server_order_date`) == 1)) {
          stop(paste("Error! Invalid data for `server_order_date`. Must be a string:", `server_order_date`))
        }
        self$`server_order_date` <- `server_order_date`
      }
      if (!is.null(`server_invoice`)) {
        if (!(is.character(`server_invoice`) && length(`server_invoice`) == 1)) {
          stop(paste("Error! Invalid data for `server_invoice`. Must be a string:", `server_invoice`))
        }
        self$`server_invoice` <- `server_invoice`
      }
      if (!is.null(`server_coupon`)) {
        if (!(is.character(`server_coupon`) && length(`server_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `server_coupon`. Must be a string:", `server_coupon`))
        }
        self$`server_coupon` <- `server_coupon`
      }
      if (!is.null(`server_status`)) {
        if (!(is.character(`server_status`) && length(`server_status`) == 1)) {
          stop(paste("Error! Invalid data for `server_status`. Must be a string:", `server_status`))
        }
        self$`server_status` <- `server_status`
      }
      if (!is.null(`server_root`)) {
        if (!(is.character(`server_root`) && length(`server_root`) == 1)) {
          stop(paste("Error! Invalid data for `server_root`. Must be a string:", `server_root`))
        }
        self$`server_root` <- `server_root`
      }
      if (!is.null(`server_dedicated_tag`)) {
        if (!(is.character(`server_dedicated_tag`) && length(`server_dedicated_tag`) == 1)) {
          stop(paste("Error! Invalid data for `server_dedicated_tag`. Must be a string:", `server_dedicated_tag`))
        }
        self$`server_dedicated_tag` <- `server_dedicated_tag`
      }
      if (!is.null(`server_custom_tag`)) {
        if (!(is.character(`server_custom_tag`) && length(`server_custom_tag`) == 1)) {
          stop(paste("Error! Invalid data for `server_custom_tag`. Must be a string:", `server_custom_tag`))
        }
        self$`server_custom_tag` <- `server_custom_tag`
      }
      if (!is.null(`server_comment`)) {
        if (!(is.character(`server_comment`) && length(`server_comment`) == 1)) {
          stop(paste("Error! Invalid data for `server_comment`. Must be a string:", `server_comment`))
        }
        self$`server_comment` <- `server_comment`
      }
      if (!is.null(`server_initial_bill`)) {
        if (!(is.character(`server_initial_bill`) && length(`server_initial_bill`) == 1)) {
          stop(paste("Error! Invalid data for `server_initial_bill`. Must be a string:", `server_initial_bill`))
        }
        self$`server_initial_bill` <- `server_initial_bill`
      }
      if (!is.null(`server_hardware`)) {
        if (!(is.character(`server_hardware`) && length(`server_hardware`) == 1)) {
          stop(paste("Error! Invalid data for `server_hardware`. Must be a string:", `server_hardware`))
        }
        self$`server_hardware` <- `server_hardware`
      }
      if (!is.null(`server_ips`)) {
        if (!(is.character(`server_ips`) && length(`server_ips`) == 1)) {
          stop(paste("Error! Invalid data for `server_ips`. Must be a string:", `server_ips`))
        }
        self$`server_ips` <- `server_ips`
      }
      if (!is.null(`server_monthly_bill`)) {
        if (!(is.character(`server_monthly_bill`) && length(`server_monthly_bill`) == 1)) {
          stop(paste("Error! Invalid data for `server_monthly_bill`. Must be a string:", `server_monthly_bill`))
        }
        self$`server_monthly_bill` <- `server_monthly_bill`
      }
      if (!is.null(`server_setup`)) {
        if (!(is.character(`server_setup`) && length(`server_setup`) == 1)) {
          stop(paste("Error! Invalid data for `server_setup`. Must be a string:", `server_setup`))
        }
        self$`server_setup` <- `server_setup`
      }
      if (!is.null(`server_discount`)) {
        stopifnot(R6::is.R6(`server_discount`))
        self$`server_discount` <- `server_discount`
      }
      if (!is.null(`server_rep`)) {
        if (!(is.character(`server_rep`) && length(`server_rep`) == 1)) {
          stop(paste("Error! Invalid data for `server_rep`. Must be a string:", `server_rep`))
        }
        self$`server_rep` <- `server_rep`
      }
      if (!is.null(`server_date`)) {
        if (!(is.character(`server_date`) && length(`server_date`) == 1)) {
          stop(paste("Error! Invalid data for `server_date`. Must be a string:", `server_date`))
        }
        self$`server_date` <- `server_date`
      }
      if (!is.null(`server_total_cost`)) {
        if (!(is.character(`server_total_cost`) && length(`server_total_cost`) == 1)) {
          stop(paste("Error! Invalid data for `server_total_cost`. Must be a string:", `server_total_cost`))
        }
        self$`server_total_cost` <- `server_total_cost`
      }
      if (!is.null(`server_location`)) {
        stopifnot(R6::is.R6(`server_location`))
        self$`server_location` <- `server_location`
      }
      if (!is.null(`server_hardware_ordered`)) {
        if (!(is.character(`server_hardware_ordered`) && length(`server_hardware_ordered`) == 1)) {
          stop(paste("Error! Invalid data for `server_hardware_ordered`. Must be a string:", `server_hardware_ordered`))
        }
        self$`server_hardware_ordered` <- `server_hardware_ordered`
      }
      if (!is.null(`server_billed`)) {
        if (!(is.character(`server_billed`) && length(`server_billed`) == 1)) {
          stop(paste("Error! Invalid data for `server_billed`. Must be a string:", `server_billed`))
        }
        self$`server_billed` <- `server_billed`
      }
      if (!is.null(`server_welcome_email`)) {
        if (!(is.character(`server_welcome_email`) && length(`server_welcome_email`) == 1)) {
          stop(paste("Error! Invalid data for `server_welcome_email`. Must be a string:", `server_welcome_email`))
        }
        self$`server_welcome_email` <- `server_welcome_email`
      }
      if (!is.null(`server_dedicated_cpu`)) {
        if (!(is.character(`server_dedicated_cpu`) && length(`server_dedicated_cpu`) == 1)) {
          stop(paste("Error! Invalid data for `server_dedicated_cpu`. Must be a string:", `server_dedicated_cpu`))
        }
        self$`server_dedicated_cpu` <- `server_dedicated_cpu`
      }
      if (!is.null(`server_dedicated_memory`)) {
        if (!(is.character(`server_dedicated_memory`) && length(`server_dedicated_memory`) == 1)) {
          stop(paste("Error! Invalid data for `server_dedicated_memory`. Must be a string:", `server_dedicated_memory`))
        }
        self$`server_dedicated_memory` <- `server_dedicated_memory`
      }
      if (!is.null(`server_dedicated_hd1`)) {
        if (!(is.character(`server_dedicated_hd1`) && length(`server_dedicated_hd1`) == 1)) {
          stop(paste("Error! Invalid data for `server_dedicated_hd1`. Must be a string:", `server_dedicated_hd1`))
        }
        self$`server_dedicated_hd1` <- `server_dedicated_hd1`
      }
      if (!is.null(`server_dedicated_hd2`)) {
        stopifnot(R6::is.R6(`server_dedicated_hd2`))
        self$`server_dedicated_hd2` <- `server_dedicated_hd2`
      }
      if (!is.null(`server_dedicated_bandwidth`)) {
        if (!(is.character(`server_dedicated_bandwidth`) && length(`server_dedicated_bandwidth`) == 1)) {
          stop(paste("Error! Invalid data for `server_dedicated_bandwidth`. Must be a string:", `server_dedicated_bandwidth`))
        }
        self$`server_dedicated_bandwidth` <- `server_dedicated_bandwidth`
      }
      if (!is.null(`server_dedicated_ips`)) {
        if (!(is.character(`server_dedicated_ips`) && length(`server_dedicated_ips`) == 1)) {
          stop(paste("Error! Invalid data for `server_dedicated_ips`. Must be a string:", `server_dedicated_ips`))
        }
        self$`server_dedicated_ips` <- `server_dedicated_ips`
      }
      if (!is.null(`server_dedicated_os`)) {
        if (!(is.character(`server_dedicated_os`) && length(`server_dedicated_os`) == 1)) {
          stop(paste("Error! Invalid data for `server_dedicated_os`. Must be a string:", `server_dedicated_os`))
        }
        self$`server_dedicated_os` <- `server_dedicated_os`
      }
      if (!is.null(`server_dedicated_cp`)) {
        stopifnot(R6::is.R6(`server_dedicated_cp`))
        self$`server_dedicated_cp` <- `server_dedicated_cp`
      }
      if (!is.null(`server_dedicated_raid`)) {
        if (!(is.character(`server_dedicated_raid`) && length(`server_dedicated_raid`) == 1)) {
          stop(paste("Error! Invalid data for `server_dedicated_raid`. Must be a string:", `server_dedicated_raid`))
        }
        self$`server_dedicated_raid` <- `server_dedicated_raid`
      }
      if (!is.null(`server_extra`)) {
        if (!(is.character(`server_extra`) && length(`server_extra`) == 1)) {
          stop(paste("Error! Invalid data for `server_extra`. Must be a string:", `server_extra`))
        }
        self$`server_extra` <- `server_extra`
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
    #' @return ServerServiceInfo as a base R list.
    #' @examples
    #' # convert array of ServerServiceInfo (x) to a data frame
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
    #' Convert ServerServiceInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerServiceInfoObject <- list()
      if (!is.null(self$`server_id`)) {
        ServerServiceInfoObject[["server_id"]] <-
          self$`server_id`
      }
      if (!is.null(self$`server_hostname`)) {
        ServerServiceInfoObject[["server_hostname"]] <-
          self$`server_hostname`
      }
      if (!is.null(self$`server_custid`)) {
        ServerServiceInfoObject[["server_custid"]] <-
          self$`server_custid`
      }
      if (!is.null(self$`server_type`)) {
        ServerServiceInfoObject[["server_type"]] <-
          self$`server_type`
      }
      if (!is.null(self$`server_currency`)) {
        ServerServiceInfoObject[["server_currency"]] <-
          self$`server_currency`
      }
      if (!is.null(self$`server_order_date`)) {
        ServerServiceInfoObject[["server_order_date"]] <-
          self$`server_order_date`
      }
      if (!is.null(self$`server_invoice`)) {
        ServerServiceInfoObject[["server_invoice"]] <-
          self$`server_invoice`
      }
      if (!is.null(self$`server_coupon`)) {
        ServerServiceInfoObject[["server_coupon"]] <-
          self$`server_coupon`
      }
      if (!is.null(self$`server_status`)) {
        ServerServiceInfoObject[["server_status"]] <-
          self$`server_status`
      }
      if (!is.null(self$`server_root`)) {
        ServerServiceInfoObject[["server_root"]] <-
          self$`server_root`
      }
      if (!is.null(self$`server_dedicated_tag`)) {
        ServerServiceInfoObject[["server_dedicated_tag"]] <-
          self$`server_dedicated_tag`
      }
      if (!is.null(self$`server_custom_tag`)) {
        ServerServiceInfoObject[["server_custom_tag"]] <-
          self$`server_custom_tag`
      }
      if (!is.null(self$`server_comment`)) {
        ServerServiceInfoObject[["server_comment"]] <-
          self$`server_comment`
      }
      if (!is.null(self$`server_initial_bill`)) {
        ServerServiceInfoObject[["server_initial_bill"]] <-
          self$`server_initial_bill`
      }
      if (!is.null(self$`server_hardware`)) {
        ServerServiceInfoObject[["server_hardware"]] <-
          self$`server_hardware`
      }
      if (!is.null(self$`server_ips`)) {
        ServerServiceInfoObject[["server_ips"]] <-
          self$`server_ips`
      }
      if (!is.null(self$`server_monthly_bill`)) {
        ServerServiceInfoObject[["server_monthly_bill"]] <-
          self$`server_monthly_bill`
      }
      if (!is.null(self$`server_setup`)) {
        ServerServiceInfoObject[["server_setup"]] <-
          self$`server_setup`
      }
      if (!is.null(self$`server_discount`)) {
        ServerServiceInfoObject[["server_discount"]] <-
          self$extractSimpleType(self$`server_discount`)
      }
      if (!is.null(self$`server_rep`)) {
        ServerServiceInfoObject[["server_rep"]] <-
          self$`server_rep`
      }
      if (!is.null(self$`server_date`)) {
        ServerServiceInfoObject[["server_date"]] <-
          self$`server_date`
      }
      if (!is.null(self$`server_total_cost`)) {
        ServerServiceInfoObject[["server_total_cost"]] <-
          self$`server_total_cost`
      }
      if (!is.null(self$`server_location`)) {
        ServerServiceInfoObject[["server_location"]] <-
          self$extractSimpleType(self$`server_location`)
      }
      if (!is.null(self$`server_hardware_ordered`)) {
        ServerServiceInfoObject[["server_hardware_ordered"]] <-
          self$`server_hardware_ordered`
      }
      if (!is.null(self$`server_billed`)) {
        ServerServiceInfoObject[["server_billed"]] <-
          self$`server_billed`
      }
      if (!is.null(self$`server_welcome_email`)) {
        ServerServiceInfoObject[["server_welcome_email"]] <-
          self$`server_welcome_email`
      }
      if (!is.null(self$`server_dedicated_cpu`)) {
        ServerServiceInfoObject[["server_dedicated_cpu"]] <-
          self$`server_dedicated_cpu`
      }
      if (!is.null(self$`server_dedicated_memory`)) {
        ServerServiceInfoObject[["server_dedicated_memory"]] <-
          self$`server_dedicated_memory`
      }
      if (!is.null(self$`server_dedicated_hd1`)) {
        ServerServiceInfoObject[["server_dedicated_hd1"]] <-
          self$`server_dedicated_hd1`
      }
      if (!is.null(self$`server_dedicated_hd2`)) {
        ServerServiceInfoObject[["server_dedicated_hd2"]] <-
          self$extractSimpleType(self$`server_dedicated_hd2`)
      }
      if (!is.null(self$`server_dedicated_bandwidth`)) {
        ServerServiceInfoObject[["server_dedicated_bandwidth"]] <-
          self$`server_dedicated_bandwidth`
      }
      if (!is.null(self$`server_dedicated_ips`)) {
        ServerServiceInfoObject[["server_dedicated_ips"]] <-
          self$`server_dedicated_ips`
      }
      if (!is.null(self$`server_dedicated_os`)) {
        ServerServiceInfoObject[["server_dedicated_os"]] <-
          self$`server_dedicated_os`
      }
      if (!is.null(self$`server_dedicated_cp`)) {
        ServerServiceInfoObject[["server_dedicated_cp"]] <-
          self$extractSimpleType(self$`server_dedicated_cp`)
      }
      if (!is.null(self$`server_dedicated_raid`)) {
        ServerServiceInfoObject[["server_dedicated_raid"]] <-
          self$`server_dedicated_raid`
      }
      if (!is.null(self$`server_extra`)) {
        ServerServiceInfoObject[["server_extra"]] <-
          self$`server_extra`
      }
      return(ServerServiceInfoObject)
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
    #' Deserialize JSON string into an instance of ServerServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerServiceInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`server_id`)) {
        self$`server_id` <- this_object$`server_id`
      }
      if (!is.null(this_object$`server_hostname`)) {
        self$`server_hostname` <- this_object$`server_hostname`
      }
      if (!is.null(this_object$`server_custid`)) {
        self$`server_custid` <- this_object$`server_custid`
      }
      if (!is.null(this_object$`server_type`)) {
        self$`server_type` <- this_object$`server_type`
      }
      if (!is.null(this_object$`server_currency`)) {
        self$`server_currency` <- this_object$`server_currency`
      }
      if (!is.null(this_object$`server_order_date`)) {
        self$`server_order_date` <- this_object$`server_order_date`
      }
      if (!is.null(this_object$`server_invoice`)) {
        self$`server_invoice` <- this_object$`server_invoice`
      }
      if (!is.null(this_object$`server_coupon`)) {
        self$`server_coupon` <- this_object$`server_coupon`
      }
      if (!is.null(this_object$`server_status`)) {
        self$`server_status` <- this_object$`server_status`
      }
      if (!is.null(this_object$`server_root`)) {
        self$`server_root` <- this_object$`server_root`
      }
      if (!is.null(this_object$`server_dedicated_tag`)) {
        self$`server_dedicated_tag` <- this_object$`server_dedicated_tag`
      }
      if (!is.null(this_object$`server_custom_tag`)) {
        self$`server_custom_tag` <- this_object$`server_custom_tag`
      }
      if (!is.null(this_object$`server_comment`)) {
        self$`server_comment` <- this_object$`server_comment`
      }
      if (!is.null(this_object$`server_initial_bill`)) {
        self$`server_initial_bill` <- this_object$`server_initial_bill`
      }
      if (!is.null(this_object$`server_hardware`)) {
        self$`server_hardware` <- this_object$`server_hardware`
      }
      if (!is.null(this_object$`server_ips`)) {
        self$`server_ips` <- this_object$`server_ips`
      }
      if (!is.null(this_object$`server_monthly_bill`)) {
        self$`server_monthly_bill` <- this_object$`server_monthly_bill`
      }
      if (!is.null(this_object$`server_setup`)) {
        self$`server_setup` <- this_object$`server_setup`
      }
      if (!is.null(this_object$`server_discount`)) {
        `server_discount_object` <- AnyType$new()
        `server_discount_object`$fromJSON(jsonlite::toJSON(this_object$`server_discount`, auto_unbox = TRUE, digits = NA))
        self$`server_discount` <- `server_discount_object`
      }
      if (!is.null(this_object$`server_rep`)) {
        self$`server_rep` <- this_object$`server_rep`
      }
      if (!is.null(this_object$`server_date`)) {
        self$`server_date` <- this_object$`server_date`
      }
      if (!is.null(this_object$`server_total_cost`)) {
        self$`server_total_cost` <- this_object$`server_total_cost`
      }
      if (!is.null(this_object$`server_location`)) {
        `server_location_object` <- AnyType$new()
        `server_location_object`$fromJSON(jsonlite::toJSON(this_object$`server_location`, auto_unbox = TRUE, digits = NA))
        self$`server_location` <- `server_location_object`
      }
      if (!is.null(this_object$`server_hardware_ordered`)) {
        self$`server_hardware_ordered` <- this_object$`server_hardware_ordered`
      }
      if (!is.null(this_object$`server_billed`)) {
        self$`server_billed` <- this_object$`server_billed`
      }
      if (!is.null(this_object$`server_welcome_email`)) {
        self$`server_welcome_email` <- this_object$`server_welcome_email`
      }
      if (!is.null(this_object$`server_dedicated_cpu`)) {
        self$`server_dedicated_cpu` <- this_object$`server_dedicated_cpu`
      }
      if (!is.null(this_object$`server_dedicated_memory`)) {
        self$`server_dedicated_memory` <- this_object$`server_dedicated_memory`
      }
      if (!is.null(this_object$`server_dedicated_hd1`)) {
        self$`server_dedicated_hd1` <- this_object$`server_dedicated_hd1`
      }
      if (!is.null(this_object$`server_dedicated_hd2`)) {
        `server_dedicated_hd2_object` <- AnyType$new()
        `server_dedicated_hd2_object`$fromJSON(jsonlite::toJSON(this_object$`server_dedicated_hd2`, auto_unbox = TRUE, digits = NA))
        self$`server_dedicated_hd2` <- `server_dedicated_hd2_object`
      }
      if (!is.null(this_object$`server_dedicated_bandwidth`)) {
        self$`server_dedicated_bandwidth` <- this_object$`server_dedicated_bandwidth`
      }
      if (!is.null(this_object$`server_dedicated_ips`)) {
        self$`server_dedicated_ips` <- this_object$`server_dedicated_ips`
      }
      if (!is.null(this_object$`server_dedicated_os`)) {
        self$`server_dedicated_os` <- this_object$`server_dedicated_os`
      }
      if (!is.null(this_object$`server_dedicated_cp`)) {
        `server_dedicated_cp_object` <- AnyType$new()
        `server_dedicated_cp_object`$fromJSON(jsonlite::toJSON(this_object$`server_dedicated_cp`, auto_unbox = TRUE, digits = NA))
        self$`server_dedicated_cp` <- `server_dedicated_cp_object`
      }
      if (!is.null(this_object$`server_dedicated_raid`)) {
        self$`server_dedicated_raid` <- this_object$`server_dedicated_raid`
      }
      if (!is.null(this_object$`server_extra`)) {
        self$`server_extra` <- this_object$`server_extra`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerServiceInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerServiceInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`server_id` <- this_object$`server_id`
      self$`server_hostname` <- this_object$`server_hostname`
      self$`server_custid` <- this_object$`server_custid`
      self$`server_type` <- this_object$`server_type`
      self$`server_currency` <- this_object$`server_currency`
      self$`server_order_date` <- this_object$`server_order_date`
      self$`server_invoice` <- this_object$`server_invoice`
      self$`server_coupon` <- this_object$`server_coupon`
      self$`server_status` <- this_object$`server_status`
      self$`server_root` <- this_object$`server_root`
      self$`server_dedicated_tag` <- this_object$`server_dedicated_tag`
      self$`server_custom_tag` <- this_object$`server_custom_tag`
      self$`server_comment` <- this_object$`server_comment`
      self$`server_initial_bill` <- this_object$`server_initial_bill`
      self$`server_hardware` <- this_object$`server_hardware`
      self$`server_ips` <- this_object$`server_ips`
      self$`server_monthly_bill` <- this_object$`server_monthly_bill`
      self$`server_setup` <- this_object$`server_setup`
      self$`server_discount` <- AnyType$new()$fromJSON(jsonlite::toJSON(this_object$`server_discount`, auto_unbox = TRUE, digits = NA))
      self$`server_rep` <- this_object$`server_rep`
      self$`server_date` <- this_object$`server_date`
      self$`server_total_cost` <- this_object$`server_total_cost`
      self$`server_location` <- AnyType$new()$fromJSON(jsonlite::toJSON(this_object$`server_location`, auto_unbox = TRUE, digits = NA))
      self$`server_hardware_ordered` <- this_object$`server_hardware_ordered`
      self$`server_billed` <- this_object$`server_billed`
      self$`server_welcome_email` <- this_object$`server_welcome_email`
      self$`server_dedicated_cpu` <- this_object$`server_dedicated_cpu`
      self$`server_dedicated_memory` <- this_object$`server_dedicated_memory`
      self$`server_dedicated_hd1` <- this_object$`server_dedicated_hd1`
      self$`server_dedicated_hd2` <- AnyType$new()$fromJSON(jsonlite::toJSON(this_object$`server_dedicated_hd2`, auto_unbox = TRUE, digits = NA))
      self$`server_dedicated_bandwidth` <- this_object$`server_dedicated_bandwidth`
      self$`server_dedicated_ips` <- this_object$`server_dedicated_ips`
      self$`server_dedicated_os` <- this_object$`server_dedicated_os`
      self$`server_dedicated_cp` <- AnyType$new()$fromJSON(jsonlite::toJSON(this_object$`server_dedicated_cp`, auto_unbox = TRUE, digits = NA))
      self$`server_dedicated_raid` <- this_object$`server_dedicated_raid`
      self$`server_extra` <- this_object$`server_extra`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerServiceInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerServiceInfo
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
# ServerServiceInfo$unlock()
#
## Below is an example to define the print function
# ServerServiceInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerServiceInfo$lock()

