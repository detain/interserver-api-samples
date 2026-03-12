#' Create a new ServerRow
#'
#' @description
#' A result row from the `Servers` `GET` request.
#'
#' @docType class
#' @title ServerRow
#' @description ServerRow Class
#' @format An \code{R6Class} generator object
#' @field server_id The id of the server. character
#' @field account_lid The account lid of the server. character
#' @field server_hostname The hostname of the server. character
#' @field server_status The status of the server. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerRow <- R6::R6Class(
  "ServerRow",
  public = list(
    `server_id` = NULL,
    `account_lid` = NULL,
    `server_hostname` = NULL,
    `server_status` = NULL,

    #' @description
    #' Initialize a new ServerRow class.
    #'
    #' @param server_id The id of the server.
    #' @param account_lid The account lid of the server.
    #' @param server_hostname The hostname of the server.
    #' @param server_status The status of the server.
    #' @param ... Other optional arguments.
    initialize = function(`server_id`, `account_lid`, `server_hostname`, `server_status`, ...) {
      if (!missing(`server_id`)) {
        if (!(is.character(`server_id`) && length(`server_id`) == 1)) {
          stop(paste("Error! Invalid data for `server_id`. Must be a string:", `server_id`))
        }
        self$`server_id` <- `server_id`
      }
      if (!missing(`account_lid`)) {
        if (!(is.character(`account_lid`) && length(`account_lid`) == 1)) {
          stop(paste("Error! Invalid data for `account_lid`. Must be a string:", `account_lid`))
        }
        self$`account_lid` <- `account_lid`
      }
      if (!missing(`server_hostname`)) {
        if (!(is.character(`server_hostname`) && length(`server_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `server_hostname`. Must be a string:", `server_hostname`))
        }
        self$`server_hostname` <- `server_hostname`
      }
      if (!missing(`server_status`)) {
        if (!(is.character(`server_status`) && length(`server_status`) == 1)) {
          stop(paste("Error! Invalid data for `server_status`. Must be a string:", `server_status`))
        }
        self$`server_status` <- `server_status`
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
    #' @return ServerRow as a base R list.
    #' @examples
    #' # convert array of ServerRow (x) to a data frame
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
    #' Convert ServerRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerRowObject <- list()
      if (!is.null(self$`server_id`)) {
        ServerRowObject[["server_id"]] <-
          self$`server_id`
      }
      if (!is.null(self$`account_lid`)) {
        ServerRowObject[["account_lid"]] <-
          self$`account_lid`
      }
      if (!is.null(self$`server_hostname`)) {
        ServerRowObject[["server_hostname"]] <-
          self$`server_hostname`
      }
      if (!is.null(self$`server_status`)) {
        ServerRowObject[["server_status"]] <-
          self$`server_status`
      }
      return(ServerRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`server_id`)) {
        self$`server_id` <- this_object$`server_id`
      }
      if (!is.null(this_object$`account_lid`)) {
        self$`account_lid` <- this_object$`account_lid`
      }
      if (!is.null(this_object$`server_hostname`)) {
        self$`server_hostname` <- this_object$`server_hostname`
      }
      if (!is.null(this_object$`server_status`)) {
        self$`server_status` <- this_object$`server_status`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`server_id` <- this_object$`server_id`
      self$`account_lid` <- this_object$`account_lid`
      self$`server_hostname` <- this_object$`server_hostname`
      self$`server_status` <- this_object$`server_status`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `server_id`
      if (!is.null(input_json$`server_id`)) {
        if (!(is.character(input_json$`server_id`) && length(input_json$`server_id`) == 1)) {
          stop(paste("Error! Invalid data for `server_id`. Must be a string:", input_json$`server_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerRow: the required field `server_id` is missing."))
      }
      # check the required field `account_lid`
      if (!is.null(input_json$`account_lid`)) {
        if (!(is.character(input_json$`account_lid`) && length(input_json$`account_lid`) == 1)) {
          stop(paste("Error! Invalid data for `account_lid`. Must be a string:", input_json$`account_lid`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerRow: the required field `account_lid` is missing."))
      }
      # check the required field `server_hostname`
      if (!is.null(input_json$`server_hostname`)) {
        if (!(is.character(input_json$`server_hostname`) && length(input_json$`server_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `server_hostname`. Must be a string:", input_json$`server_hostname`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerRow: the required field `server_hostname` is missing."))
      }
      # check the required field `server_status`
      if (!is.null(input_json$`server_status`)) {
        if (!(is.character(input_json$`server_status`) && length(input_json$`server_status`) == 1)) {
          stop(paste("Error! Invalid data for `server_status`. Must be a string:", input_json$`server_status`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerRow: the required field `server_status` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerRow
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `server_id` is null
      if (is.null(self$`server_id`)) {
        return(FALSE)
      }

      # check if the required `account_lid` is null
      if (is.null(self$`account_lid`)) {
        return(FALSE)
      }

      # check if the required `server_hostname` is null
      if (is.null(self$`server_hostname`)) {
        return(FALSE)
      }

      # check if the required `server_status` is null
      if (is.null(self$`server_status`)) {
        return(FALSE)
      }

      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `server_id` is null
      if (is.null(self$`server_id`)) {
        invalid_fields["server_id"] <- "Non-nullable required field `server_id` cannot be null."
      }

      # check if the required `account_lid` is null
      if (is.null(self$`account_lid`)) {
        invalid_fields["account_lid"] <- "Non-nullable required field `account_lid` cannot be null."
      }

      # check if the required `server_hostname` is null
      if (is.null(self$`server_hostname`)) {
        invalid_fields["server_hostname"] <- "Non-nullable required field `server_hostname` cannot be null."
      }

      # check if the required `server_status` is null
      if (is.null(self$`server_status`)) {
        invalid_fields["server_status"] <- "Non-nullable required field `server_status` cannot be null."
      }

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
# ServerRow$unlock()
#
## Below is an example to define the print function
# ServerRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerRow$lock()

