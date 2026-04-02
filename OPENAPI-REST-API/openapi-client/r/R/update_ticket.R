#' Create a new UpdateTicket
#'
#' @description
#' Update custom fields of the ticket
#'
#' @docType class
#' @title UpdateTicket
#' @description UpdateTicket Class
#' @format An \code{R6Class} generator object
#' @field ip  character [optional]
#' @field ip_address  character [optional]
#' @field customer_server_access  character [optional]
#' @field root_password  character [optional]
#' @field sudo_username  character [optional]
#' @field sudo_password  character [optional]
#' @field port  integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
UpdateTicket <- R6::R6Class(
  "UpdateTicket",
  public = list(
    `ip` = NULL,
    `ip_address` = NULL,
    `customer_server_access` = NULL,
    `root_password` = NULL,
    `sudo_username` = NULL,
    `sudo_password` = NULL,
    `port` = NULL,

    #' @description
    #' Initialize a new UpdateTicket class.
    #'
    #' @param ip ip
    #' @param ip_address ip_address
    #' @param customer_server_access customer_server_access
    #' @param root_password root_password
    #' @param sudo_username sudo_username
    #' @param sudo_password sudo_password
    #' @param port port
    #' @param ... Other optional arguments.
    initialize = function(`ip` = NULL, `ip_address` = NULL, `customer_server_access` = NULL, `root_password` = NULL, `sudo_username` = NULL, `sudo_password` = NULL, `port` = NULL, ...) {
      if (!is.null(`ip`)) {
        if (!(is.character(`ip`) && length(`ip`) == 1)) {
          stop(paste("Error! Invalid data for `ip`. Must be a string:", `ip`))
        }
        self$`ip` <- `ip`
      }
      if (!is.null(`ip_address`)) {
        if (!(is.character(`ip_address`) && length(`ip_address`) == 1)) {
          stop(paste("Error! Invalid data for `ip_address`. Must be a string:", `ip_address`))
        }
        self$`ip_address` <- `ip_address`
      }
      if (!is.null(`customer_server_access`)) {
        if (!(`customer_server_access` %in% c("y", "n"))) {
          stop(paste("Error! \"", `customer_server_access`, "\" cannot be assigned to `customer_server_access`. Must be \"y\", \"n\".", sep = ""))
        }
        if (!(is.character(`customer_server_access`) && length(`customer_server_access`) == 1)) {
          stop(paste("Error! Invalid data for `customer_server_access`. Must be a string:", `customer_server_access`))
        }
        self$`customer_server_access` <- `customer_server_access`
      }
      if (!is.null(`root_password`)) {
        if (!(is.character(`root_password`) && length(`root_password`) == 1)) {
          stop(paste("Error! Invalid data for `root_password`. Must be a string:", `root_password`))
        }
        self$`root_password` <- `root_password`
      }
      if (!is.null(`sudo_username`)) {
        if (!(is.character(`sudo_username`) && length(`sudo_username`) == 1)) {
          stop(paste("Error! Invalid data for `sudo_username`. Must be a string:", `sudo_username`))
        }
        self$`sudo_username` <- `sudo_username`
      }
      if (!is.null(`sudo_password`)) {
        if (!(is.character(`sudo_password`) && length(`sudo_password`) == 1)) {
          stop(paste("Error! Invalid data for `sudo_password`. Must be a string:", `sudo_password`))
        }
        self$`sudo_password` <- `sudo_password`
      }
      if (!is.null(`port`)) {
        if (!(is.numeric(`port`) && length(`port`) == 1)) {
          stop(paste("Error! Invalid data for `port`. Must be an integer:", `port`))
        }
        self$`port` <- `port`
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
    #' @return UpdateTicket as a base R list.
    #' @examples
    #' # convert array of UpdateTicket (x) to a data frame
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
    #' Convert UpdateTicket to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      UpdateTicketObject <- list()
      if (!is.null(self$`ip`)) {
        UpdateTicketObject[["ip"]] <-
          self$`ip`
      }
      if (!is.null(self$`ip_address`)) {
        UpdateTicketObject[["ip_address"]] <-
          self$`ip_address`
      }
      if (!is.null(self$`customer_server_access`)) {
        UpdateTicketObject[["customer_server_access"]] <-
          self$`customer_server_access`
      }
      if (!is.null(self$`root_password`)) {
        UpdateTicketObject[["root_password"]] <-
          self$`root_password`
      }
      if (!is.null(self$`sudo_username`)) {
        UpdateTicketObject[["sudo_username"]] <-
          self$`sudo_username`
      }
      if (!is.null(self$`sudo_password`)) {
        UpdateTicketObject[["sudo_password"]] <-
          self$`sudo_password`
      }
      if (!is.null(self$`port`)) {
        UpdateTicketObject[["port"]] <-
          self$`port`
      }
      return(UpdateTicketObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of UpdateTicket
    #'
    #' @param input_json the JSON input
    #' @return the instance of UpdateTicket
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`ip`)) {
        self$`ip` <- this_object$`ip`
      }
      if (!is.null(this_object$`ip_address`)) {
        self$`ip_address` <- this_object$`ip_address`
      }
      if (!is.null(this_object$`customer_server_access`)) {
        if (!is.null(this_object$`customer_server_access`) && !(this_object$`customer_server_access` %in% c("y", "n"))) {
          stop(paste("Error! \"", this_object$`customer_server_access`, "\" cannot be assigned to `customer_server_access`. Must be \"y\", \"n\".", sep = ""))
        }
        self$`customer_server_access` <- this_object$`customer_server_access`
      }
      if (!is.null(this_object$`root_password`)) {
        self$`root_password` <- this_object$`root_password`
      }
      if (!is.null(this_object$`sudo_username`)) {
        self$`sudo_username` <- this_object$`sudo_username`
      }
      if (!is.null(this_object$`sudo_password`)) {
        self$`sudo_password` <- this_object$`sudo_password`
      }
      if (!is.null(this_object$`port`)) {
        self$`port` <- this_object$`port`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return UpdateTicket in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of UpdateTicket
    #'
    #' @param input_json the JSON input
    #' @return the instance of UpdateTicket
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`ip` <- this_object$`ip`
      self$`ip_address` <- this_object$`ip_address`
      if (!is.null(this_object$`customer_server_access`) && !(this_object$`customer_server_access` %in% c("y", "n"))) {
        stop(paste("Error! \"", this_object$`customer_server_access`, "\" cannot be assigned to `customer_server_access`. Must be \"y\", \"n\".", sep = ""))
      }
      self$`customer_server_access` <- this_object$`customer_server_access`
      self$`root_password` <- this_object$`root_password`
      self$`sudo_username` <- this_object$`sudo_username`
      self$`sudo_password` <- this_object$`sudo_password`
      self$`port` <- this_object$`port`
      self
    },

    #' @description
    #' Validate JSON input with respect to UpdateTicket and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of UpdateTicket
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
# UpdateTicket$unlock()
#
## Below is an example to define the print function
# UpdateTicket$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# UpdateTicket$lock()

