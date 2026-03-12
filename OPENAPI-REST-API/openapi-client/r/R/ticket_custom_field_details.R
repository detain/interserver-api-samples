#' Create a new TicketCustomFieldDetails
#'
#' @description
#' Optional fields providing additional info in ticket
#'
#' @docType class
#' @title TicketCustomFieldDetails
#' @description TicketCustomFieldDetails Class
#' @format An \code{R6Class} generator object
#' @field Customer Server Access  character [optional]
#' @field Ip Address  character [optional]
#' @field Root Password  character [optional]
#' @field Sudo User  character [optional]
#' @field Sudo Password  integer [optional]
#' @field Port  integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
TicketCustomFieldDetails <- R6::R6Class(
  "TicketCustomFieldDetails",
  public = list(
    `Customer Server Access` = NULL,
    `Ip Address` = NULL,
    `Root Password` = NULL,
    `Sudo User` = NULL,
    `Sudo Password` = NULL,
    `Port` = NULL,

    #' @description
    #' Initialize a new TicketCustomFieldDetails class.
    #'
    #' @param Customer Server Access Customer Server Access
    #' @param Ip Address Ip Address
    #' @param Root Password Root Password
    #' @param Sudo User Sudo User
    #' @param Sudo Password Sudo Password
    #' @param Port Port
    #' @param ... Other optional arguments.
    initialize = function(`Customer Server Access` = NULL, `Ip Address` = NULL, `Root Password` = NULL, `Sudo User` = NULL, `Sudo Password` = NULL, `Port` = NULL, ...) {
      if (!is.null(`Customer Server Access`)) {
        if (!(`Customer Server Access` %in% c("y", "n"))) {
          stop(paste("Error! \"", `Customer Server Access`, "\" cannot be assigned to `Customer Server Access`. Must be \"y\", \"n\".", sep = ""))
        }
        if (!(is.character(`Customer Server Access`) && length(`Customer Server Access`) == 1)) {
          stop(paste("Error! Invalid data for `Customer Server Access`. Must be a string:", `Customer Server Access`))
        }
        self$`Customer Server Access` <- `Customer Server Access`
      }
      if (!is.null(`Ip Address`)) {
        if (!(is.character(`Ip Address`) && length(`Ip Address`) == 1)) {
          stop(paste("Error! Invalid data for `Ip Address`. Must be a string:", `Ip Address`))
        }
        self$`Ip Address` <- `Ip Address`
      }
      if (!is.null(`Root Password`)) {
        if (!(is.character(`Root Password`) && length(`Root Password`) == 1)) {
          stop(paste("Error! Invalid data for `Root Password`. Must be a string:", `Root Password`))
        }
        self$`Root Password` <- `Root Password`
      }
      if (!is.null(`Sudo User`)) {
        if (!(is.character(`Sudo User`) && length(`Sudo User`) == 1)) {
          stop(paste("Error! Invalid data for `Sudo User`. Must be a string:", `Sudo User`))
        }
        self$`Sudo User` <- `Sudo User`
      }
      if (!is.null(`Sudo Password`)) {
        if (!(is.numeric(`Sudo Password`) && length(`Sudo Password`) == 1)) {
          stop(paste("Error! Invalid data for `Sudo Password`. Must be an integer:", `Sudo Password`))
        }
        self$`Sudo Password` <- `Sudo Password`
      }
      if (!is.null(`Port`)) {
        if (!(is.numeric(`Port`) && length(`Port`) == 1)) {
          stop(paste("Error! Invalid data for `Port`. Must be an integer:", `Port`))
        }
        self$`Port` <- `Port`
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
    #' @return TicketCustomFieldDetails as a base R list.
    #' @examples
    #' # convert array of TicketCustomFieldDetails (x) to a data frame
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
    #' Convert TicketCustomFieldDetails to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      TicketCustomFieldDetailsObject <- list()
      if (!is.null(self$`Customer Server Access`)) {
        TicketCustomFieldDetailsObject[["Customer Server Access"]] <-
          self$`Customer Server Access`
      }
      if (!is.null(self$`Ip Address`)) {
        TicketCustomFieldDetailsObject[["Ip Address"]] <-
          self$`Ip Address`
      }
      if (!is.null(self$`Root Password`)) {
        TicketCustomFieldDetailsObject[["Root Password"]] <-
          self$`Root Password`
      }
      if (!is.null(self$`Sudo User`)) {
        TicketCustomFieldDetailsObject[["Sudo User"]] <-
          self$`Sudo User`
      }
      if (!is.null(self$`Sudo Password`)) {
        TicketCustomFieldDetailsObject[["Sudo Password"]] <-
          self$`Sudo Password`
      }
      if (!is.null(self$`Port`)) {
        TicketCustomFieldDetailsObject[["Port"]] <-
          self$`Port`
      }
      return(TicketCustomFieldDetailsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of TicketCustomFieldDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of TicketCustomFieldDetails
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`Customer Server Access`)) {
        if (!is.null(this_object$`Customer Server Access`) && !(this_object$`Customer Server Access` %in% c("y", "n"))) {
          stop(paste("Error! \"", this_object$`Customer Server Access`, "\" cannot be assigned to `Customer Server Access`. Must be \"y\", \"n\".", sep = ""))
        }
        self$`Customer Server Access` <- this_object$`Customer Server Access`
      }
      if (!is.null(this_object$`Ip Address`)) {
        self$`Ip Address` <- this_object$`Ip Address`
      }
      if (!is.null(this_object$`Root Password`)) {
        self$`Root Password` <- this_object$`Root Password`
      }
      if (!is.null(this_object$`Sudo User`)) {
        self$`Sudo User` <- this_object$`Sudo User`
      }
      if (!is.null(this_object$`Sudo Password`)) {
        self$`Sudo Password` <- this_object$`Sudo Password`
      }
      if (!is.null(this_object$`Port`)) {
        self$`Port` <- this_object$`Port`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return TicketCustomFieldDetails in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of TicketCustomFieldDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of TicketCustomFieldDetails
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`Customer Server Access`) && !(this_object$`Customer Server Access` %in% c("y", "n"))) {
        stop(paste("Error! \"", this_object$`Customer Server Access`, "\" cannot be assigned to `Customer Server Access`. Must be \"y\", \"n\".", sep = ""))
      }
      self$`Customer Server Access` <- this_object$`Customer Server Access`
      self$`Ip Address` <- this_object$`Ip Address`
      self$`Root Password` <- this_object$`Root Password`
      self$`Sudo User` <- this_object$`Sudo User`
      self$`Sudo Password` <- this_object$`Sudo Password`
      self$`Port` <- this_object$`Port`
      self
    },

    #' @description
    #' Validate JSON input with respect to TicketCustomFieldDetails and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of TicketCustomFieldDetails
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
# TicketCustomFieldDetails$unlock()
#
## Below is an example to define the print function
# TicketCustomFieldDetails$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# TicketCustomFieldDetails$lock()

