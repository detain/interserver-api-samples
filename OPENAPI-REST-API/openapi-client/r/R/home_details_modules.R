#' Create a new HomeDetailsModules
#'
#' @description
#' HomeDetailsModules Class
#'
#' @docType class
#' @title HomeDetailsModules
#' @description HomeDetailsModules Class
#' @format An \code{R6Class} generator object
#' @field domains  \link{HomeDetailsModulesDomains} [optional]
#' @field webhosting  \link{HomeDetailsModulesWebhosting} [optional]
#' @field vps  \link{HomeDetailsModulesVps} [optional]
#' @field licenses  \link{HomeDetailsModulesLicenses} [optional]
#' @field backups  \link{HomeDetailsModulesBackups} [optional]
#' @field servers  \link{HomeDetailsModulesServers} [optional]
#' @field quickservers  \link{HomeDetailsModulesQuickservers} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HomeDetailsModules <- R6::R6Class(
  "HomeDetailsModules",
  public = list(
    `domains` = NULL,
    `webhosting` = NULL,
    `vps` = NULL,
    `licenses` = NULL,
    `backups` = NULL,
    `servers` = NULL,
    `quickservers` = NULL,

    #' @description
    #' Initialize a new HomeDetailsModules class.
    #'
    #' @param domains domains
    #' @param webhosting webhosting
    #' @param vps vps
    #' @param licenses licenses
    #' @param backups backups
    #' @param servers servers
    #' @param quickservers quickservers
    #' @param ... Other optional arguments.
    initialize = function(`domains` = NULL, `webhosting` = NULL, `vps` = NULL, `licenses` = NULL, `backups` = NULL, `servers` = NULL, `quickservers` = NULL, ...) {
      if (!is.null(`domains`)) {
        stopifnot(R6::is.R6(`domains`))
        self$`domains` <- `domains`
      }
      if (!is.null(`webhosting`)) {
        stopifnot(R6::is.R6(`webhosting`))
        self$`webhosting` <- `webhosting`
      }
      if (!is.null(`vps`)) {
        stopifnot(R6::is.R6(`vps`))
        self$`vps` <- `vps`
      }
      if (!is.null(`licenses`)) {
        stopifnot(R6::is.R6(`licenses`))
        self$`licenses` <- `licenses`
      }
      if (!is.null(`backups`)) {
        stopifnot(R6::is.R6(`backups`))
        self$`backups` <- `backups`
      }
      if (!is.null(`servers`)) {
        stopifnot(R6::is.R6(`servers`))
        self$`servers` <- `servers`
      }
      if (!is.null(`quickservers`)) {
        stopifnot(R6::is.R6(`quickservers`))
        self$`quickservers` <- `quickservers`
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
    #' @return HomeDetailsModules as a base R list.
    #' @examples
    #' # convert array of HomeDetailsModules (x) to a data frame
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
    #' Convert HomeDetailsModules to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HomeDetailsModulesObject <- list()
      if (!is.null(self$`domains`)) {
        HomeDetailsModulesObject[["domains"]] <-
          self$extractSimpleType(self$`domains`)
      }
      if (!is.null(self$`webhosting`)) {
        HomeDetailsModulesObject[["webhosting"]] <-
          self$extractSimpleType(self$`webhosting`)
      }
      if (!is.null(self$`vps`)) {
        HomeDetailsModulesObject[["vps"]] <-
          self$extractSimpleType(self$`vps`)
      }
      if (!is.null(self$`licenses`)) {
        HomeDetailsModulesObject[["licenses"]] <-
          self$extractSimpleType(self$`licenses`)
      }
      if (!is.null(self$`backups`)) {
        HomeDetailsModulesObject[["backups"]] <-
          self$extractSimpleType(self$`backups`)
      }
      if (!is.null(self$`servers`)) {
        HomeDetailsModulesObject[["servers"]] <-
          self$extractSimpleType(self$`servers`)
      }
      if (!is.null(self$`quickservers`)) {
        HomeDetailsModulesObject[["quickservers"]] <-
          self$extractSimpleType(self$`quickservers`)
      }
      return(HomeDetailsModulesObject)
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
    #' Deserialize JSON string into an instance of HomeDetailsModules
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeDetailsModules
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`domains`)) {
        `domains_object` <- HomeDetailsModulesDomains$new()
        `domains_object`$fromJSON(jsonlite::toJSON(this_object$`domains`, auto_unbox = TRUE, digits = NA))
        self$`domains` <- `domains_object`
      }
      if (!is.null(this_object$`webhosting`)) {
        `webhosting_object` <- HomeDetailsModulesWebhosting$new()
        `webhosting_object`$fromJSON(jsonlite::toJSON(this_object$`webhosting`, auto_unbox = TRUE, digits = NA))
        self$`webhosting` <- `webhosting_object`
      }
      if (!is.null(this_object$`vps`)) {
        `vps_object` <- HomeDetailsModulesVps$new()
        `vps_object`$fromJSON(jsonlite::toJSON(this_object$`vps`, auto_unbox = TRUE, digits = NA))
        self$`vps` <- `vps_object`
      }
      if (!is.null(this_object$`licenses`)) {
        `licenses_object` <- HomeDetailsModulesLicenses$new()
        `licenses_object`$fromJSON(jsonlite::toJSON(this_object$`licenses`, auto_unbox = TRUE, digits = NA))
        self$`licenses` <- `licenses_object`
      }
      if (!is.null(this_object$`backups`)) {
        `backups_object` <- HomeDetailsModulesBackups$new()
        `backups_object`$fromJSON(jsonlite::toJSON(this_object$`backups`, auto_unbox = TRUE, digits = NA))
        self$`backups` <- `backups_object`
      }
      if (!is.null(this_object$`servers`)) {
        `servers_object` <- HomeDetailsModulesServers$new()
        `servers_object`$fromJSON(jsonlite::toJSON(this_object$`servers`, auto_unbox = TRUE, digits = NA))
        self$`servers` <- `servers_object`
      }
      if (!is.null(this_object$`quickservers`)) {
        `quickservers_object` <- HomeDetailsModulesQuickservers$new()
        `quickservers_object`$fromJSON(jsonlite::toJSON(this_object$`quickservers`, auto_unbox = TRUE, digits = NA))
        self$`quickservers` <- `quickservers_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HomeDetailsModules in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeDetailsModules
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeDetailsModules
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`domains` <- HomeDetailsModulesDomains$new()$fromJSON(jsonlite::toJSON(this_object$`domains`, auto_unbox = TRUE, digits = NA))
      self$`webhosting` <- HomeDetailsModulesWebhosting$new()$fromJSON(jsonlite::toJSON(this_object$`webhosting`, auto_unbox = TRUE, digits = NA))
      self$`vps` <- HomeDetailsModulesVps$new()$fromJSON(jsonlite::toJSON(this_object$`vps`, auto_unbox = TRUE, digits = NA))
      self$`licenses` <- HomeDetailsModulesLicenses$new()$fromJSON(jsonlite::toJSON(this_object$`licenses`, auto_unbox = TRUE, digits = NA))
      self$`backups` <- HomeDetailsModulesBackups$new()$fromJSON(jsonlite::toJSON(this_object$`backups`, auto_unbox = TRUE, digits = NA))
      self$`servers` <- HomeDetailsModulesServers$new()$fromJSON(jsonlite::toJSON(this_object$`servers`, auto_unbox = TRUE, digits = NA))
      self$`quickservers` <- HomeDetailsModulesQuickservers$new()$fromJSON(jsonlite::toJSON(this_object$`quickservers`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to HomeDetailsModules and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HomeDetailsModules
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
# HomeDetailsModules$unlock()
#
## Below is an example to define the print function
# HomeDetailsModules$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HomeDetailsModules$lock()

