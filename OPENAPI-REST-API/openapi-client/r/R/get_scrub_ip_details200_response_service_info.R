#' Create a new GetScrubIpDetails200ResponseServiceInfo
#'
#' @description
#' GetScrubIpDetails200ResponseServiceInfo Class
#'
#' @docType class
#' @title GetScrubIpDetails200ResponseServiceInfo
#' @description GetScrubIpDetails200ResponseServiceInfo Class
#' @format An \code{R6Class} generator object
#' @field scrub_ip_id  character [optional]
#' @field scrub_ip_type  character [optional]
#' @field scrub_ip_custid  character [optional]
#' @field scrub_ip_order_date  character [optional]
#' @field scrub_ip_ip  character [optional]
#' @field scrub_ip_service_id  character [optional]
#' @field scrub_ip_service_module  character [optional]
#' @field scrub_ip_status  character [optional]
#' @field scrub_ip_invoice  character [optional]
#' @field scrub_ip_currency  character [optional]
#' @field scrub_ip_coupon  character [optional]
#' @field scrub_ip_comment  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GetScrubIpDetails200ResponseServiceInfo <- R6::R6Class(
  "GetScrubIpDetails200ResponseServiceInfo",
  public = list(
    `scrub_ip_id` = NULL,
    `scrub_ip_type` = NULL,
    `scrub_ip_custid` = NULL,
    `scrub_ip_order_date` = NULL,
    `scrub_ip_ip` = NULL,
    `scrub_ip_service_id` = NULL,
    `scrub_ip_service_module` = NULL,
    `scrub_ip_status` = NULL,
    `scrub_ip_invoice` = NULL,
    `scrub_ip_currency` = NULL,
    `scrub_ip_coupon` = NULL,
    `scrub_ip_comment` = NULL,

    #' @description
    #' Initialize a new GetScrubIpDetails200ResponseServiceInfo class.
    #'
    #' @param scrub_ip_id scrub_ip_id
    #' @param scrub_ip_type scrub_ip_type
    #' @param scrub_ip_custid scrub_ip_custid
    #' @param scrub_ip_order_date scrub_ip_order_date
    #' @param scrub_ip_ip scrub_ip_ip
    #' @param scrub_ip_service_id scrub_ip_service_id
    #' @param scrub_ip_service_module scrub_ip_service_module
    #' @param scrub_ip_status scrub_ip_status
    #' @param scrub_ip_invoice scrub_ip_invoice
    #' @param scrub_ip_currency scrub_ip_currency
    #' @param scrub_ip_coupon scrub_ip_coupon
    #' @param scrub_ip_comment scrub_ip_comment
    #' @param ... Other optional arguments.
    initialize = function(`scrub_ip_id` = NULL, `scrub_ip_type` = NULL, `scrub_ip_custid` = NULL, `scrub_ip_order_date` = NULL, `scrub_ip_ip` = NULL, `scrub_ip_service_id` = NULL, `scrub_ip_service_module` = NULL, `scrub_ip_status` = NULL, `scrub_ip_invoice` = NULL, `scrub_ip_currency` = NULL, `scrub_ip_coupon` = NULL, `scrub_ip_comment` = NULL, ...) {
      if (!is.null(`scrub_ip_id`)) {
        if (!(is.character(`scrub_ip_id`) && length(`scrub_ip_id`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_id`. Must be a string:", `scrub_ip_id`))
        }
        self$`scrub_ip_id` <- `scrub_ip_id`
      }
      if (!is.null(`scrub_ip_type`)) {
        if (!(is.character(`scrub_ip_type`) && length(`scrub_ip_type`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_type`. Must be a string:", `scrub_ip_type`))
        }
        self$`scrub_ip_type` <- `scrub_ip_type`
      }
      if (!is.null(`scrub_ip_custid`)) {
        if (!(is.character(`scrub_ip_custid`) && length(`scrub_ip_custid`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_custid`. Must be a string:", `scrub_ip_custid`))
        }
        self$`scrub_ip_custid` <- `scrub_ip_custid`
      }
      if (!is.null(`scrub_ip_order_date`)) {
        if (!(is.character(`scrub_ip_order_date`) && length(`scrub_ip_order_date`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_order_date`. Must be a string:", `scrub_ip_order_date`))
        }
        self$`scrub_ip_order_date` <- `scrub_ip_order_date`
      }
      if (!is.null(`scrub_ip_ip`)) {
        if (!(is.character(`scrub_ip_ip`) && length(`scrub_ip_ip`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_ip`. Must be a string:", `scrub_ip_ip`))
        }
        self$`scrub_ip_ip` <- `scrub_ip_ip`
      }
      if (!is.null(`scrub_ip_service_id`)) {
        if (!(is.character(`scrub_ip_service_id`) && length(`scrub_ip_service_id`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_service_id`. Must be a string:", `scrub_ip_service_id`))
        }
        self$`scrub_ip_service_id` <- `scrub_ip_service_id`
      }
      if (!is.null(`scrub_ip_service_module`)) {
        if (!(is.character(`scrub_ip_service_module`) && length(`scrub_ip_service_module`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_service_module`. Must be a string:", `scrub_ip_service_module`))
        }
        self$`scrub_ip_service_module` <- `scrub_ip_service_module`
      }
      if (!is.null(`scrub_ip_status`)) {
        if (!(`scrub_ip_status` %in% c("active", "pending", "canceled", "expired"))) {
          stop(paste("Error! \"", `scrub_ip_status`, "\" cannot be assigned to `scrub_ip_status`. Must be \"active\", \"pending\", \"canceled\", \"expired\".", sep = ""))
        }
        if (!(is.character(`scrub_ip_status`) && length(`scrub_ip_status`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_status`. Must be a string:", `scrub_ip_status`))
        }
        self$`scrub_ip_status` <- `scrub_ip_status`
      }
      if (!is.null(`scrub_ip_invoice`)) {
        if (!(is.character(`scrub_ip_invoice`) && length(`scrub_ip_invoice`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_invoice`. Must be a string:", `scrub_ip_invoice`))
        }
        self$`scrub_ip_invoice` <- `scrub_ip_invoice`
      }
      if (!is.null(`scrub_ip_currency`)) {
        if (!(is.character(`scrub_ip_currency`) && length(`scrub_ip_currency`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_currency`. Must be a string:", `scrub_ip_currency`))
        }
        self$`scrub_ip_currency` <- `scrub_ip_currency`
      }
      if (!is.null(`scrub_ip_coupon`)) {
        if (!(is.character(`scrub_ip_coupon`) && length(`scrub_ip_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_coupon`. Must be a string:", `scrub_ip_coupon`))
        }
        self$`scrub_ip_coupon` <- `scrub_ip_coupon`
      }
      if (!is.null(`scrub_ip_comment`)) {
        if (!(is.character(`scrub_ip_comment`) && length(`scrub_ip_comment`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_comment`. Must be a string:", `scrub_ip_comment`))
        }
        self$`scrub_ip_comment` <- `scrub_ip_comment`
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
    #' @return GetScrubIpDetails200ResponseServiceInfo as a base R list.
    #' @examples
    #' # convert array of GetScrubIpDetails200ResponseServiceInfo (x) to a data frame
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
    #' Convert GetScrubIpDetails200ResponseServiceInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      GetScrubIpDetails200ResponseServiceInfoObject <- list()
      if (!is.null(self$`scrub_ip_id`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_id"]] <-
          self$`scrub_ip_id`
      }
      if (!is.null(self$`scrub_ip_type`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_type"]] <-
          self$`scrub_ip_type`
      }
      if (!is.null(self$`scrub_ip_custid`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_custid"]] <-
          self$`scrub_ip_custid`
      }
      if (!is.null(self$`scrub_ip_order_date`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_order_date"]] <-
          self$`scrub_ip_order_date`
      }
      if (!is.null(self$`scrub_ip_ip`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_ip"]] <-
          self$`scrub_ip_ip`
      }
      if (!is.null(self$`scrub_ip_service_id`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_service_id"]] <-
          self$`scrub_ip_service_id`
      }
      if (!is.null(self$`scrub_ip_service_module`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_service_module"]] <-
          self$`scrub_ip_service_module`
      }
      if (!is.null(self$`scrub_ip_status`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_status"]] <-
          self$`scrub_ip_status`
      }
      if (!is.null(self$`scrub_ip_invoice`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_invoice"]] <-
          self$`scrub_ip_invoice`
      }
      if (!is.null(self$`scrub_ip_currency`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_currency"]] <-
          self$`scrub_ip_currency`
      }
      if (!is.null(self$`scrub_ip_coupon`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_coupon"]] <-
          self$`scrub_ip_coupon`
      }
      if (!is.null(self$`scrub_ip_comment`)) {
        GetScrubIpDetails200ResponseServiceInfoObject[["scrub_ip_comment"]] <-
          self$`scrub_ip_comment`
      }
      return(GetScrubIpDetails200ResponseServiceInfoObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of GetScrubIpDetails200ResponseServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetScrubIpDetails200ResponseServiceInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`scrub_ip_id`)) {
        self$`scrub_ip_id` <- this_object$`scrub_ip_id`
      }
      if (!is.null(this_object$`scrub_ip_type`)) {
        self$`scrub_ip_type` <- this_object$`scrub_ip_type`
      }
      if (!is.null(this_object$`scrub_ip_custid`)) {
        self$`scrub_ip_custid` <- this_object$`scrub_ip_custid`
      }
      if (!is.null(this_object$`scrub_ip_order_date`)) {
        self$`scrub_ip_order_date` <- this_object$`scrub_ip_order_date`
      }
      if (!is.null(this_object$`scrub_ip_ip`)) {
        self$`scrub_ip_ip` <- this_object$`scrub_ip_ip`
      }
      if (!is.null(this_object$`scrub_ip_service_id`)) {
        self$`scrub_ip_service_id` <- this_object$`scrub_ip_service_id`
      }
      if (!is.null(this_object$`scrub_ip_service_module`)) {
        self$`scrub_ip_service_module` <- this_object$`scrub_ip_service_module`
      }
      if (!is.null(this_object$`scrub_ip_status`)) {
        if (!is.null(this_object$`scrub_ip_status`) && !(this_object$`scrub_ip_status` %in% c("active", "pending", "canceled", "expired"))) {
          stop(paste("Error! \"", this_object$`scrub_ip_status`, "\" cannot be assigned to `scrub_ip_status`. Must be \"active\", \"pending\", \"canceled\", \"expired\".", sep = ""))
        }
        self$`scrub_ip_status` <- this_object$`scrub_ip_status`
      }
      if (!is.null(this_object$`scrub_ip_invoice`)) {
        self$`scrub_ip_invoice` <- this_object$`scrub_ip_invoice`
      }
      if (!is.null(this_object$`scrub_ip_currency`)) {
        self$`scrub_ip_currency` <- this_object$`scrub_ip_currency`
      }
      if (!is.null(this_object$`scrub_ip_coupon`)) {
        self$`scrub_ip_coupon` <- this_object$`scrub_ip_coupon`
      }
      if (!is.null(this_object$`scrub_ip_comment`)) {
        self$`scrub_ip_comment` <- this_object$`scrub_ip_comment`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return GetScrubIpDetails200ResponseServiceInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of GetScrubIpDetails200ResponseServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetScrubIpDetails200ResponseServiceInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`scrub_ip_id` <- this_object$`scrub_ip_id`
      self$`scrub_ip_type` <- this_object$`scrub_ip_type`
      self$`scrub_ip_custid` <- this_object$`scrub_ip_custid`
      self$`scrub_ip_order_date` <- this_object$`scrub_ip_order_date`
      self$`scrub_ip_ip` <- this_object$`scrub_ip_ip`
      self$`scrub_ip_service_id` <- this_object$`scrub_ip_service_id`
      self$`scrub_ip_service_module` <- this_object$`scrub_ip_service_module`
      if (!is.null(this_object$`scrub_ip_status`) && !(this_object$`scrub_ip_status` %in% c("active", "pending", "canceled", "expired"))) {
        stop(paste("Error! \"", this_object$`scrub_ip_status`, "\" cannot be assigned to `scrub_ip_status`. Must be \"active\", \"pending\", \"canceled\", \"expired\".", sep = ""))
      }
      self$`scrub_ip_status` <- this_object$`scrub_ip_status`
      self$`scrub_ip_invoice` <- this_object$`scrub_ip_invoice`
      self$`scrub_ip_currency` <- this_object$`scrub_ip_currency`
      self$`scrub_ip_coupon` <- this_object$`scrub_ip_coupon`
      self$`scrub_ip_comment` <- this_object$`scrub_ip_comment`
      self
    },

    #' @description
    #' Validate JSON input with respect to GetScrubIpDetails200ResponseServiceInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of GetScrubIpDetails200ResponseServiceInfo
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
# GetScrubIpDetails200ResponseServiceInfo$unlock()
#
## Below is an example to define the print function
# GetScrubIpDetails200ResponseServiceInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# GetScrubIpDetails200ResponseServiceInfo$lock()

