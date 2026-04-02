#' Create a new WebsiteServiceInfo
#'
#' @description
#' WebsiteServiceInfo Class
#'
#' @docType class
#' @title WebsiteServiceInfo
#' @description WebsiteServiceInfo Class
#' @format An \code{R6Class} generator object
#' @field website_id Website ID character [optional]
#' @field website_server Website server character [optional]
#' @field website_type Website type character [optional]
#' @field website_currency Currency of the website character [optional]
#' @field website_order_date Order date of the website character [optional]
#' @field website_custid Customer ID of the website character [optional]
#' @field website_ip IP address of the website character [optional]
#' @field website_status Status of the website character [optional]
#' @field website_invoice Invoice of the website character [optional]
#' @field website_coupon Coupon for the website character [optional]
#' @field website_extra Extra information in JSON format for the website character [optional]
#' @field website_hostname Hostname of the website character [optional]
#' @field website_comment Comment for the website character [optional]
#' @field website_username Username for the website character [optional]
#' @field website_server_status Server status of the website character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsiteServiceInfo <- R6::R6Class(
  "WebsiteServiceInfo",
  public = list(
    `website_id` = NULL,
    `website_server` = NULL,
    `website_type` = NULL,
    `website_currency` = NULL,
    `website_order_date` = NULL,
    `website_custid` = NULL,
    `website_ip` = NULL,
    `website_status` = NULL,
    `website_invoice` = NULL,
    `website_coupon` = NULL,
    `website_extra` = NULL,
    `website_hostname` = NULL,
    `website_comment` = NULL,
    `website_username` = NULL,
    `website_server_status` = NULL,

    #' @description
    #' Initialize a new WebsiteServiceInfo class.
    #'
    #' @param website_id Website ID
    #' @param website_server Website server
    #' @param website_type Website type
    #' @param website_currency Currency of the website
    #' @param website_order_date Order date of the website
    #' @param website_custid Customer ID of the website
    #' @param website_ip IP address of the website
    #' @param website_status Status of the website
    #' @param website_invoice Invoice of the website
    #' @param website_coupon Coupon for the website
    #' @param website_extra Extra information in JSON format for the website
    #' @param website_hostname Hostname of the website
    #' @param website_comment Comment for the website
    #' @param website_username Username for the website
    #' @param website_server_status Server status of the website
    #' @param ... Other optional arguments.
    initialize = function(`website_id` = NULL, `website_server` = NULL, `website_type` = NULL, `website_currency` = NULL, `website_order_date` = NULL, `website_custid` = NULL, `website_ip` = NULL, `website_status` = NULL, `website_invoice` = NULL, `website_coupon` = NULL, `website_extra` = NULL, `website_hostname` = NULL, `website_comment` = NULL, `website_username` = NULL, `website_server_status` = NULL, ...) {
      if (!is.null(`website_id`)) {
        if (!(is.character(`website_id`) && length(`website_id`) == 1)) {
          stop(paste("Error! Invalid data for `website_id`. Must be a string:", `website_id`))
        }
        self$`website_id` <- `website_id`
      }
      if (!is.null(`website_server`)) {
        if (!(is.character(`website_server`) && length(`website_server`) == 1)) {
          stop(paste("Error! Invalid data for `website_server`. Must be a string:", `website_server`))
        }
        self$`website_server` <- `website_server`
      }
      if (!is.null(`website_type`)) {
        if (!(is.character(`website_type`) && length(`website_type`) == 1)) {
          stop(paste("Error! Invalid data for `website_type`. Must be a string:", `website_type`))
        }
        self$`website_type` <- `website_type`
      }
      if (!is.null(`website_currency`)) {
        if (!(is.character(`website_currency`) && length(`website_currency`) == 1)) {
          stop(paste("Error! Invalid data for `website_currency`. Must be a string:", `website_currency`))
        }
        self$`website_currency` <- `website_currency`
      }
      if (!is.null(`website_order_date`)) {
        if (!(is.character(`website_order_date`) && length(`website_order_date`) == 1)) {
          stop(paste("Error! Invalid data for `website_order_date`. Must be a string:", `website_order_date`))
        }
        self$`website_order_date` <- `website_order_date`
      }
      if (!is.null(`website_custid`)) {
        if (!(is.character(`website_custid`) && length(`website_custid`) == 1)) {
          stop(paste("Error! Invalid data for `website_custid`. Must be a string:", `website_custid`))
        }
        self$`website_custid` <- `website_custid`
      }
      if (!is.null(`website_ip`)) {
        if (!(is.character(`website_ip`) && length(`website_ip`) == 1)) {
          stop(paste("Error! Invalid data for `website_ip`. Must be a string:", `website_ip`))
        }
        self$`website_ip` <- `website_ip`
      }
      if (!is.null(`website_status`)) {
        if (!(is.character(`website_status`) && length(`website_status`) == 1)) {
          stop(paste("Error! Invalid data for `website_status`. Must be a string:", `website_status`))
        }
        self$`website_status` <- `website_status`
      }
      if (!is.null(`website_invoice`)) {
        if (!(is.character(`website_invoice`) && length(`website_invoice`) == 1)) {
          stop(paste("Error! Invalid data for `website_invoice`. Must be a string:", `website_invoice`))
        }
        self$`website_invoice` <- `website_invoice`
      }
      if (!is.null(`website_coupon`)) {
        if (!(is.character(`website_coupon`) && length(`website_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `website_coupon`. Must be a string:", `website_coupon`))
        }
        self$`website_coupon` <- `website_coupon`
      }
      if (!is.null(`website_extra`)) {
        if (!(is.character(`website_extra`) && length(`website_extra`) == 1)) {
          stop(paste("Error! Invalid data for `website_extra`. Must be a string:", `website_extra`))
        }
        self$`website_extra` <- `website_extra`
      }
      if (!is.null(`website_hostname`)) {
        if (!(is.character(`website_hostname`) && length(`website_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `website_hostname`. Must be a string:", `website_hostname`))
        }
        self$`website_hostname` <- `website_hostname`
      }
      if (!is.null(`website_comment`)) {
        if (!(is.character(`website_comment`) && length(`website_comment`) == 1)) {
          stop(paste("Error! Invalid data for `website_comment`. Must be a string:", `website_comment`))
        }
        self$`website_comment` <- `website_comment`
      }
      if (!is.null(`website_username`)) {
        if (!(is.character(`website_username`) && length(`website_username`) == 1)) {
          stop(paste("Error! Invalid data for `website_username`. Must be a string:", `website_username`))
        }
        self$`website_username` <- `website_username`
      }
      if (!is.null(`website_server_status`)) {
        if (!(is.character(`website_server_status`) && length(`website_server_status`) == 1)) {
          stop(paste("Error! Invalid data for `website_server_status`. Must be a string:", `website_server_status`))
        }
        self$`website_server_status` <- `website_server_status`
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
    #' @return WebsiteServiceInfo as a base R list.
    #' @examples
    #' # convert array of WebsiteServiceInfo (x) to a data frame
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
    #' Convert WebsiteServiceInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsiteServiceInfoObject <- list()
      if (!is.null(self$`website_id`)) {
        WebsiteServiceInfoObject[["website_id"]] <-
          self$`website_id`
      }
      if (!is.null(self$`website_server`)) {
        WebsiteServiceInfoObject[["website_server"]] <-
          self$`website_server`
      }
      if (!is.null(self$`website_type`)) {
        WebsiteServiceInfoObject[["website_type"]] <-
          self$`website_type`
      }
      if (!is.null(self$`website_currency`)) {
        WebsiteServiceInfoObject[["website_currency"]] <-
          self$`website_currency`
      }
      if (!is.null(self$`website_order_date`)) {
        WebsiteServiceInfoObject[["website_order_date"]] <-
          self$`website_order_date`
      }
      if (!is.null(self$`website_custid`)) {
        WebsiteServiceInfoObject[["website_custid"]] <-
          self$`website_custid`
      }
      if (!is.null(self$`website_ip`)) {
        WebsiteServiceInfoObject[["website_ip"]] <-
          self$`website_ip`
      }
      if (!is.null(self$`website_status`)) {
        WebsiteServiceInfoObject[["website_status"]] <-
          self$`website_status`
      }
      if (!is.null(self$`website_invoice`)) {
        WebsiteServiceInfoObject[["website_invoice"]] <-
          self$`website_invoice`
      }
      if (!is.null(self$`website_coupon`)) {
        WebsiteServiceInfoObject[["website_coupon"]] <-
          self$`website_coupon`
      }
      if (!is.null(self$`website_extra`)) {
        WebsiteServiceInfoObject[["website_extra"]] <-
          self$`website_extra`
      }
      if (!is.null(self$`website_hostname`)) {
        WebsiteServiceInfoObject[["website_hostname"]] <-
          self$`website_hostname`
      }
      if (!is.null(self$`website_comment`)) {
        WebsiteServiceInfoObject[["website_comment"]] <-
          self$`website_comment`
      }
      if (!is.null(self$`website_username`)) {
        WebsiteServiceInfoObject[["website_username"]] <-
          self$`website_username`
      }
      if (!is.null(self$`website_server_status`)) {
        WebsiteServiceInfoObject[["website_server_status"]] <-
          self$`website_server_status`
      }
      return(WebsiteServiceInfoObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteServiceInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`website_id`)) {
        self$`website_id` <- this_object$`website_id`
      }
      if (!is.null(this_object$`website_server`)) {
        self$`website_server` <- this_object$`website_server`
      }
      if (!is.null(this_object$`website_type`)) {
        self$`website_type` <- this_object$`website_type`
      }
      if (!is.null(this_object$`website_currency`)) {
        self$`website_currency` <- this_object$`website_currency`
      }
      if (!is.null(this_object$`website_order_date`)) {
        self$`website_order_date` <- this_object$`website_order_date`
      }
      if (!is.null(this_object$`website_custid`)) {
        self$`website_custid` <- this_object$`website_custid`
      }
      if (!is.null(this_object$`website_ip`)) {
        self$`website_ip` <- this_object$`website_ip`
      }
      if (!is.null(this_object$`website_status`)) {
        self$`website_status` <- this_object$`website_status`
      }
      if (!is.null(this_object$`website_invoice`)) {
        self$`website_invoice` <- this_object$`website_invoice`
      }
      if (!is.null(this_object$`website_coupon`)) {
        self$`website_coupon` <- this_object$`website_coupon`
      }
      if (!is.null(this_object$`website_extra`)) {
        self$`website_extra` <- this_object$`website_extra`
      }
      if (!is.null(this_object$`website_hostname`)) {
        self$`website_hostname` <- this_object$`website_hostname`
      }
      if (!is.null(this_object$`website_comment`)) {
        self$`website_comment` <- this_object$`website_comment`
      }
      if (!is.null(this_object$`website_username`)) {
        self$`website_username` <- this_object$`website_username`
      }
      if (!is.null(this_object$`website_server_status`)) {
        self$`website_server_status` <- this_object$`website_server_status`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsiteServiceInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteServiceInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`website_id` <- this_object$`website_id`
      self$`website_server` <- this_object$`website_server`
      self$`website_type` <- this_object$`website_type`
      self$`website_currency` <- this_object$`website_currency`
      self$`website_order_date` <- this_object$`website_order_date`
      self$`website_custid` <- this_object$`website_custid`
      self$`website_ip` <- this_object$`website_ip`
      self$`website_status` <- this_object$`website_status`
      self$`website_invoice` <- this_object$`website_invoice`
      self$`website_coupon` <- this_object$`website_coupon`
      self$`website_extra` <- this_object$`website_extra`
      self$`website_hostname` <- this_object$`website_hostname`
      self$`website_comment` <- this_object$`website_comment`
      self$`website_username` <- this_object$`website_username`
      self$`website_server_status` <- this_object$`website_server_status`
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsiteServiceInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsiteServiceInfo
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
# WebsiteServiceInfo$unlock()
#
## Below is an example to define the print function
# WebsiteServiceInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsiteServiceInfo$lock()

