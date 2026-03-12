#' Create a new VpsOrder
#'
#' @description
#' Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
#'
#' @docType class
#' @title VpsOrder
#' @description VpsOrder Class
#' @format An \code{R6Class} generator object
#' @field vpsSliceSsdOvzCost Cost of VPS Slice SSD OVZ numeric
#' @field vpsSliceOvzCost Cost of VPS Slice OVZ numeric
#' @field vpsSliceSsdVirtuozzoCost Cost of VPS Slice SSD Virtuozzo numeric
#' @field vpsSliceVirtuozzoCost Cost of VPS Slice Virtuozzo numeric
#' @field vpsSliceHypervCost Cost of VPS Slice HyperV numeric
#' @field vpsSliceVmwareCost Cost of VPS Slice VMware numeric
#' @field vpsSliceLxcCost Cost of VPS Slice LXC numeric
#' @field vpsSliceXenCost Cost of VPS Slice Xen numeric
#' @field vpsSliceKvmLCost Cost of VPS Slice KVM L numeric
#' @field vpsSliceKvmStorageCost Cost of VPS Slice KVM Storage numeric
#' @field vpsNyCost Cost of VPS in NY numeric
#' @field vpsSliceKvmWCost Cost of VPS Slice KVM Windows numeric
#' @field cpanelCost Cost of cPanel numeric
#' @field daCost Cost of DirectAdmin (DA) numeric
#' @field ramSlice RAM for VPS Slice character
#' @field hdSlice Hard Disk for VPS Slice character
#' @field hdStorageSlice Storage Hard Disk for VPS Slice character
#' @field bwSlice Bandwidth for VPS Slice character
#' @field bwType Bandwidth Type character
#' @field bwTotal Total Bandwidth numeric
#' @field maxSlices Maximum Slices character
#' @field platformPackages  \link{VpsOrderPlatformPackages}
#' @field platformNames  \link{VpsOrderPlatformNames}
#' @field packageCosts  \link{VpsOrderPackageCosts}
#' @field locationStock  \link{VpsOrderLocationStock}
#' @field locationNames  \link{VpsOrderLocationNames}
#' @field osNames  \link{VpsOrderOsNames}
#' @field templates  \link{VpsOrderTemplates}
#' @field serviceTypes  \link{VpsOrderServiceTypes}
#' @field currency Currency character
#' @field currencySymbol Currency Symbol character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsOrder <- R6::R6Class(
  "VpsOrder",
  public = list(
    `vpsSliceSsdOvzCost` = NULL,
    `vpsSliceOvzCost` = NULL,
    `vpsSliceSsdVirtuozzoCost` = NULL,
    `vpsSliceVirtuozzoCost` = NULL,
    `vpsSliceHypervCost` = NULL,
    `vpsSliceVmwareCost` = NULL,
    `vpsSliceLxcCost` = NULL,
    `vpsSliceXenCost` = NULL,
    `vpsSliceKvmLCost` = NULL,
    `vpsSliceKvmStorageCost` = NULL,
    `vpsNyCost` = NULL,
    `vpsSliceKvmWCost` = NULL,
    `cpanelCost` = NULL,
    `daCost` = NULL,
    `ramSlice` = NULL,
    `hdSlice` = NULL,
    `hdStorageSlice` = NULL,
    `bwSlice` = NULL,
    `bwType` = NULL,
    `bwTotal` = NULL,
    `maxSlices` = NULL,
    `platformPackages` = NULL,
    `platformNames` = NULL,
    `packageCosts` = NULL,
    `locationStock` = NULL,
    `locationNames` = NULL,
    `osNames` = NULL,
    `templates` = NULL,
    `serviceTypes` = NULL,
    `currency` = NULL,
    `currencySymbol` = NULL,

    #' @description
    #' Initialize a new VpsOrder class.
    #'
    #' @param vpsSliceSsdOvzCost Cost of VPS Slice SSD OVZ
    #' @param vpsSliceOvzCost Cost of VPS Slice OVZ
    #' @param vpsSliceSsdVirtuozzoCost Cost of VPS Slice SSD Virtuozzo
    #' @param vpsSliceVirtuozzoCost Cost of VPS Slice Virtuozzo
    #' @param vpsSliceHypervCost Cost of VPS Slice HyperV
    #' @param vpsSliceVmwareCost Cost of VPS Slice VMware
    #' @param vpsSliceLxcCost Cost of VPS Slice LXC
    #' @param vpsSliceXenCost Cost of VPS Slice Xen
    #' @param vpsSliceKvmLCost Cost of VPS Slice KVM L
    #' @param vpsSliceKvmStorageCost Cost of VPS Slice KVM Storage
    #' @param vpsNyCost Cost of VPS in NY
    #' @param vpsSliceKvmWCost Cost of VPS Slice KVM Windows
    #' @param cpanelCost Cost of cPanel
    #' @param daCost Cost of DirectAdmin (DA)
    #' @param ramSlice RAM for VPS Slice
    #' @param hdSlice Hard Disk for VPS Slice
    #' @param hdStorageSlice Storage Hard Disk for VPS Slice
    #' @param bwSlice Bandwidth for VPS Slice
    #' @param bwType Bandwidth Type
    #' @param bwTotal Total Bandwidth
    #' @param maxSlices Maximum Slices
    #' @param platformPackages platformPackages
    #' @param platformNames platformNames
    #' @param packageCosts packageCosts
    #' @param locationStock locationStock
    #' @param locationNames locationNames
    #' @param osNames osNames
    #' @param templates templates
    #' @param serviceTypes serviceTypes
    #' @param currency Currency
    #' @param currencySymbol Currency Symbol
    #' @param ... Other optional arguments.
    initialize = function(`vpsSliceSsdOvzCost`, `vpsSliceOvzCost`, `vpsSliceSsdVirtuozzoCost`, `vpsSliceVirtuozzoCost`, `vpsSliceHypervCost`, `vpsSliceVmwareCost`, `vpsSliceLxcCost`, `vpsSliceXenCost`, `vpsSliceKvmLCost`, `vpsSliceKvmStorageCost`, `vpsNyCost`, `vpsSliceKvmWCost`, `cpanelCost`, `daCost`, `ramSlice`, `hdSlice`, `hdStorageSlice`, `bwSlice`, `bwType`, `bwTotal`, `maxSlices`, `platformPackages`, `platformNames`, `packageCosts`, `locationStock`, `locationNames`, `osNames`, `templates`, `serviceTypes`, `currency`, `currencySymbol`, ...) {
      if (!missing(`vpsSliceSsdOvzCost`)) {
        self$`vpsSliceSsdOvzCost` <- `vpsSliceSsdOvzCost`
      }
      if (!missing(`vpsSliceOvzCost`)) {
        self$`vpsSliceOvzCost` <- `vpsSliceOvzCost`
      }
      if (!missing(`vpsSliceSsdVirtuozzoCost`)) {
        self$`vpsSliceSsdVirtuozzoCost` <- `vpsSliceSsdVirtuozzoCost`
      }
      if (!missing(`vpsSliceVirtuozzoCost`)) {
        self$`vpsSliceVirtuozzoCost` <- `vpsSliceVirtuozzoCost`
      }
      if (!missing(`vpsSliceHypervCost`)) {
        self$`vpsSliceHypervCost` <- `vpsSliceHypervCost`
      }
      if (!missing(`vpsSliceVmwareCost`)) {
        self$`vpsSliceVmwareCost` <- `vpsSliceVmwareCost`
      }
      if (!missing(`vpsSliceLxcCost`)) {
        self$`vpsSliceLxcCost` <- `vpsSliceLxcCost`
      }
      if (!missing(`vpsSliceXenCost`)) {
        self$`vpsSliceXenCost` <- `vpsSliceXenCost`
      }
      if (!missing(`vpsSliceKvmLCost`)) {
        self$`vpsSliceKvmLCost` <- `vpsSliceKvmLCost`
      }
      if (!missing(`vpsSliceKvmStorageCost`)) {
        self$`vpsSliceKvmStorageCost` <- `vpsSliceKvmStorageCost`
      }
      if (!missing(`vpsNyCost`)) {
        self$`vpsNyCost` <- `vpsNyCost`
      }
      if (!missing(`vpsSliceKvmWCost`)) {
        self$`vpsSliceKvmWCost` <- `vpsSliceKvmWCost`
      }
      if (!missing(`cpanelCost`)) {
        self$`cpanelCost` <- `cpanelCost`
      }
      if (!missing(`daCost`)) {
        self$`daCost` <- `daCost`
      }
      if (!missing(`ramSlice`)) {
        if (!(is.character(`ramSlice`) && length(`ramSlice`) == 1)) {
          stop(paste("Error! Invalid data for `ramSlice`. Must be a string:", `ramSlice`))
        }
        self$`ramSlice` <- `ramSlice`
      }
      if (!missing(`hdSlice`)) {
        if (!(is.character(`hdSlice`) && length(`hdSlice`) == 1)) {
          stop(paste("Error! Invalid data for `hdSlice`. Must be a string:", `hdSlice`))
        }
        self$`hdSlice` <- `hdSlice`
      }
      if (!missing(`hdStorageSlice`)) {
        if (!(is.character(`hdStorageSlice`) && length(`hdStorageSlice`) == 1)) {
          stop(paste("Error! Invalid data for `hdStorageSlice`. Must be a string:", `hdStorageSlice`))
        }
        self$`hdStorageSlice` <- `hdStorageSlice`
      }
      if (!missing(`bwSlice`)) {
        if (!(is.character(`bwSlice`) && length(`bwSlice`) == 1)) {
          stop(paste("Error! Invalid data for `bwSlice`. Must be a string:", `bwSlice`))
        }
        self$`bwSlice` <- `bwSlice`
      }
      if (!missing(`bwType`)) {
        if (!(is.character(`bwType`) && length(`bwType`) == 1)) {
          stop(paste("Error! Invalid data for `bwType`. Must be a string:", `bwType`))
        }
        self$`bwType` <- `bwType`
      }
      if (!missing(`bwTotal`)) {
        self$`bwTotal` <- `bwTotal`
      }
      if (!missing(`maxSlices`)) {
        if (!(is.character(`maxSlices`) && length(`maxSlices`) == 1)) {
          stop(paste("Error! Invalid data for `maxSlices`. Must be a string:", `maxSlices`))
        }
        self$`maxSlices` <- `maxSlices`
      }
      if (!missing(`platformPackages`)) {
        stopifnot(R6::is.R6(`platformPackages`))
        self$`platformPackages` <- `platformPackages`
      }
      if (!missing(`platformNames`)) {
        stopifnot(R6::is.R6(`platformNames`))
        self$`platformNames` <- `platformNames`
      }
      if (!missing(`packageCosts`)) {
        stopifnot(R6::is.R6(`packageCosts`))
        self$`packageCosts` <- `packageCosts`
      }
      if (!missing(`locationStock`)) {
        stopifnot(R6::is.R6(`locationStock`))
        self$`locationStock` <- `locationStock`
      }
      if (!missing(`locationNames`)) {
        stopifnot(R6::is.R6(`locationNames`))
        self$`locationNames` <- `locationNames`
      }
      if (!missing(`osNames`)) {
        stopifnot(R6::is.R6(`osNames`))
        self$`osNames` <- `osNames`
      }
      if (!missing(`templates`)) {
        stopifnot(R6::is.R6(`templates`))
        self$`templates` <- `templates`
      }
      if (!missing(`serviceTypes`)) {
        stopifnot(R6::is.R6(`serviceTypes`))
        self$`serviceTypes` <- `serviceTypes`
      }
      if (!missing(`currency`)) {
        if (!(is.character(`currency`) && length(`currency`) == 1)) {
          stop(paste("Error! Invalid data for `currency`. Must be a string:", `currency`))
        }
        self$`currency` <- `currency`
      }
      if (!missing(`currencySymbol`)) {
        if (!(is.character(`currencySymbol`) && length(`currencySymbol`) == 1)) {
          stop(paste("Error! Invalid data for `currencySymbol`. Must be a string:", `currencySymbol`))
        }
        self$`currencySymbol` <- `currencySymbol`
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
    #' @return VpsOrder as a base R list.
    #' @examples
    #' # convert array of VpsOrder (x) to a data frame
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
    #' Convert VpsOrder to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsOrderObject <- list()
      if (!is.null(self$`vpsSliceSsdOvzCost`)) {
        VpsOrderObject[["vpsSliceSsdOvzCost"]] <-
          self$`vpsSliceSsdOvzCost`
      }
      if (!is.null(self$`vpsSliceOvzCost`)) {
        VpsOrderObject[["vpsSliceOvzCost"]] <-
          self$`vpsSliceOvzCost`
      }
      if (!is.null(self$`vpsSliceSsdVirtuozzoCost`)) {
        VpsOrderObject[["vpsSliceSsdVirtuozzoCost"]] <-
          self$`vpsSliceSsdVirtuozzoCost`
      }
      if (!is.null(self$`vpsSliceVirtuozzoCost`)) {
        VpsOrderObject[["vpsSliceVirtuozzoCost"]] <-
          self$`vpsSliceVirtuozzoCost`
      }
      if (!is.null(self$`vpsSliceHypervCost`)) {
        VpsOrderObject[["vpsSliceHypervCost"]] <-
          self$`vpsSliceHypervCost`
      }
      if (!is.null(self$`vpsSliceVmwareCost`)) {
        VpsOrderObject[["vpsSliceVmwareCost"]] <-
          self$`vpsSliceVmwareCost`
      }
      if (!is.null(self$`vpsSliceLxcCost`)) {
        VpsOrderObject[["vpsSliceLxcCost"]] <-
          self$`vpsSliceLxcCost`
      }
      if (!is.null(self$`vpsSliceXenCost`)) {
        VpsOrderObject[["vpsSliceXenCost"]] <-
          self$`vpsSliceXenCost`
      }
      if (!is.null(self$`vpsSliceKvmLCost`)) {
        VpsOrderObject[["vpsSliceKvmLCost"]] <-
          self$`vpsSliceKvmLCost`
      }
      if (!is.null(self$`vpsSliceKvmStorageCost`)) {
        VpsOrderObject[["vpsSliceKvmStorageCost"]] <-
          self$`vpsSliceKvmStorageCost`
      }
      if (!is.null(self$`vpsNyCost`)) {
        VpsOrderObject[["vpsNyCost"]] <-
          self$`vpsNyCost`
      }
      if (!is.null(self$`vpsSliceKvmWCost`)) {
        VpsOrderObject[["vpsSliceKvmWCost"]] <-
          self$`vpsSliceKvmWCost`
      }
      if (!is.null(self$`cpanelCost`)) {
        VpsOrderObject[["cpanelCost"]] <-
          self$`cpanelCost`
      }
      if (!is.null(self$`daCost`)) {
        VpsOrderObject[["daCost"]] <-
          self$`daCost`
      }
      if (!is.null(self$`ramSlice`)) {
        VpsOrderObject[["ramSlice"]] <-
          self$`ramSlice`
      }
      if (!is.null(self$`hdSlice`)) {
        VpsOrderObject[["hdSlice"]] <-
          self$`hdSlice`
      }
      if (!is.null(self$`hdStorageSlice`)) {
        VpsOrderObject[["hdStorageSlice"]] <-
          self$`hdStorageSlice`
      }
      if (!is.null(self$`bwSlice`)) {
        VpsOrderObject[["bwSlice"]] <-
          self$`bwSlice`
      }
      if (!is.null(self$`bwType`)) {
        VpsOrderObject[["bwType"]] <-
          self$`bwType`
      }
      if (!is.null(self$`bwTotal`)) {
        VpsOrderObject[["bwTotal"]] <-
          self$`bwTotal`
      }
      if (!is.null(self$`maxSlices`)) {
        VpsOrderObject[["maxSlices"]] <-
          self$`maxSlices`
      }
      if (!is.null(self$`platformPackages`)) {
        VpsOrderObject[["platformPackages"]] <-
          self$extractSimpleType(self$`platformPackages`)
      }
      if (!is.null(self$`platformNames`)) {
        VpsOrderObject[["platformNames"]] <-
          self$extractSimpleType(self$`platformNames`)
      }
      if (!is.null(self$`packageCosts`)) {
        VpsOrderObject[["packageCosts"]] <-
          self$extractSimpleType(self$`packageCosts`)
      }
      if (!is.null(self$`locationStock`)) {
        VpsOrderObject[["locationStock"]] <-
          self$extractSimpleType(self$`locationStock`)
      }
      if (!is.null(self$`locationNames`)) {
        VpsOrderObject[["locationNames"]] <-
          self$extractSimpleType(self$`locationNames`)
      }
      if (!is.null(self$`osNames`)) {
        VpsOrderObject[["osNames"]] <-
          self$extractSimpleType(self$`osNames`)
      }
      if (!is.null(self$`templates`)) {
        VpsOrderObject[["templates"]] <-
          self$extractSimpleType(self$`templates`)
      }
      if (!is.null(self$`serviceTypes`)) {
        VpsOrderObject[["serviceTypes"]] <-
          self$extractSimpleType(self$`serviceTypes`)
      }
      if (!is.null(self$`currency`)) {
        VpsOrderObject[["currency"]] <-
          self$`currency`
      }
      if (!is.null(self$`currencySymbol`)) {
        VpsOrderObject[["currencySymbol"]] <-
          self$`currencySymbol`
      }
      return(VpsOrderObject)
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
    #' Deserialize JSON string into an instance of VpsOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrder
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`vpsSliceSsdOvzCost`)) {
        self$`vpsSliceSsdOvzCost` <- this_object$`vpsSliceSsdOvzCost`
      }
      if (!is.null(this_object$`vpsSliceOvzCost`)) {
        self$`vpsSliceOvzCost` <- this_object$`vpsSliceOvzCost`
      }
      if (!is.null(this_object$`vpsSliceSsdVirtuozzoCost`)) {
        self$`vpsSliceSsdVirtuozzoCost` <- this_object$`vpsSliceSsdVirtuozzoCost`
      }
      if (!is.null(this_object$`vpsSliceVirtuozzoCost`)) {
        self$`vpsSliceVirtuozzoCost` <- this_object$`vpsSliceVirtuozzoCost`
      }
      if (!is.null(this_object$`vpsSliceHypervCost`)) {
        self$`vpsSliceHypervCost` <- this_object$`vpsSliceHypervCost`
      }
      if (!is.null(this_object$`vpsSliceVmwareCost`)) {
        self$`vpsSliceVmwareCost` <- this_object$`vpsSliceVmwareCost`
      }
      if (!is.null(this_object$`vpsSliceLxcCost`)) {
        self$`vpsSliceLxcCost` <- this_object$`vpsSliceLxcCost`
      }
      if (!is.null(this_object$`vpsSliceXenCost`)) {
        self$`vpsSliceXenCost` <- this_object$`vpsSliceXenCost`
      }
      if (!is.null(this_object$`vpsSliceKvmLCost`)) {
        self$`vpsSliceKvmLCost` <- this_object$`vpsSliceKvmLCost`
      }
      if (!is.null(this_object$`vpsSliceKvmStorageCost`)) {
        self$`vpsSliceKvmStorageCost` <- this_object$`vpsSliceKvmStorageCost`
      }
      if (!is.null(this_object$`vpsNyCost`)) {
        self$`vpsNyCost` <- this_object$`vpsNyCost`
      }
      if (!is.null(this_object$`vpsSliceKvmWCost`)) {
        self$`vpsSliceKvmWCost` <- this_object$`vpsSliceKvmWCost`
      }
      if (!is.null(this_object$`cpanelCost`)) {
        self$`cpanelCost` <- this_object$`cpanelCost`
      }
      if (!is.null(this_object$`daCost`)) {
        self$`daCost` <- this_object$`daCost`
      }
      if (!is.null(this_object$`ramSlice`)) {
        self$`ramSlice` <- this_object$`ramSlice`
      }
      if (!is.null(this_object$`hdSlice`)) {
        self$`hdSlice` <- this_object$`hdSlice`
      }
      if (!is.null(this_object$`hdStorageSlice`)) {
        self$`hdStorageSlice` <- this_object$`hdStorageSlice`
      }
      if (!is.null(this_object$`bwSlice`)) {
        self$`bwSlice` <- this_object$`bwSlice`
      }
      if (!is.null(this_object$`bwType`)) {
        self$`bwType` <- this_object$`bwType`
      }
      if (!is.null(this_object$`bwTotal`)) {
        self$`bwTotal` <- this_object$`bwTotal`
      }
      if (!is.null(this_object$`maxSlices`)) {
        self$`maxSlices` <- this_object$`maxSlices`
      }
      if (!is.null(this_object$`platformPackages`)) {
        `platformpackages_object` <- VpsOrderPlatformPackages$new()
        `platformpackages_object`$fromJSON(jsonlite::toJSON(this_object$`platformPackages`, auto_unbox = TRUE, digits = NA))
        self$`platformPackages` <- `platformpackages_object`
      }
      if (!is.null(this_object$`platformNames`)) {
        `platformnames_object` <- VpsOrderPlatformNames$new()
        `platformnames_object`$fromJSON(jsonlite::toJSON(this_object$`platformNames`, auto_unbox = TRUE, digits = NA))
        self$`platformNames` <- `platformnames_object`
      }
      if (!is.null(this_object$`packageCosts`)) {
        `packagecosts_object` <- VpsOrderPackageCosts$new()
        `packagecosts_object`$fromJSON(jsonlite::toJSON(this_object$`packageCosts`, auto_unbox = TRUE, digits = NA))
        self$`packageCosts` <- `packagecosts_object`
      }
      if (!is.null(this_object$`locationStock`)) {
        `locationstock_object` <- VpsOrderLocationStock$new()
        `locationstock_object`$fromJSON(jsonlite::toJSON(this_object$`locationStock`, auto_unbox = TRUE, digits = NA))
        self$`locationStock` <- `locationstock_object`
      }
      if (!is.null(this_object$`locationNames`)) {
        `locationnames_object` <- VpsOrderLocationNames$new()
        `locationnames_object`$fromJSON(jsonlite::toJSON(this_object$`locationNames`, auto_unbox = TRUE, digits = NA))
        self$`locationNames` <- `locationnames_object`
      }
      if (!is.null(this_object$`osNames`)) {
        `osnames_object` <- VpsOrderOsNames$new()
        `osnames_object`$fromJSON(jsonlite::toJSON(this_object$`osNames`, auto_unbox = TRUE, digits = NA))
        self$`osNames` <- `osnames_object`
      }
      if (!is.null(this_object$`templates`)) {
        `templates_object` <- VpsOrderTemplates$new()
        `templates_object`$fromJSON(jsonlite::toJSON(this_object$`templates`, auto_unbox = TRUE, digits = NA))
        self$`templates` <- `templates_object`
      }
      if (!is.null(this_object$`serviceTypes`)) {
        `servicetypes_object` <- VpsOrderServiceTypes$new()
        `servicetypes_object`$fromJSON(jsonlite::toJSON(this_object$`serviceTypes`, auto_unbox = TRUE, digits = NA))
        self$`serviceTypes` <- `servicetypes_object`
      }
      if (!is.null(this_object$`currency`)) {
        self$`currency` <- this_object$`currency`
      }
      if (!is.null(this_object$`currencySymbol`)) {
        self$`currencySymbol` <- this_object$`currencySymbol`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsOrder in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrder
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`vpsSliceSsdOvzCost` <- this_object$`vpsSliceSsdOvzCost`
      self$`vpsSliceOvzCost` <- this_object$`vpsSliceOvzCost`
      self$`vpsSliceSsdVirtuozzoCost` <- this_object$`vpsSliceSsdVirtuozzoCost`
      self$`vpsSliceVirtuozzoCost` <- this_object$`vpsSliceVirtuozzoCost`
      self$`vpsSliceHypervCost` <- this_object$`vpsSliceHypervCost`
      self$`vpsSliceVmwareCost` <- this_object$`vpsSliceVmwareCost`
      self$`vpsSliceLxcCost` <- this_object$`vpsSliceLxcCost`
      self$`vpsSliceXenCost` <- this_object$`vpsSliceXenCost`
      self$`vpsSliceKvmLCost` <- this_object$`vpsSliceKvmLCost`
      self$`vpsSliceKvmStorageCost` <- this_object$`vpsSliceKvmStorageCost`
      self$`vpsNyCost` <- this_object$`vpsNyCost`
      self$`vpsSliceKvmWCost` <- this_object$`vpsSliceKvmWCost`
      self$`cpanelCost` <- this_object$`cpanelCost`
      self$`daCost` <- this_object$`daCost`
      self$`ramSlice` <- this_object$`ramSlice`
      self$`hdSlice` <- this_object$`hdSlice`
      self$`hdStorageSlice` <- this_object$`hdStorageSlice`
      self$`bwSlice` <- this_object$`bwSlice`
      self$`bwType` <- this_object$`bwType`
      self$`bwTotal` <- this_object$`bwTotal`
      self$`maxSlices` <- this_object$`maxSlices`
      self$`platformPackages` <- VpsOrderPlatformPackages$new()$fromJSON(jsonlite::toJSON(this_object$`platformPackages`, auto_unbox = TRUE, digits = NA))
      self$`platformNames` <- VpsOrderPlatformNames$new()$fromJSON(jsonlite::toJSON(this_object$`platformNames`, auto_unbox = TRUE, digits = NA))
      self$`packageCosts` <- VpsOrderPackageCosts$new()$fromJSON(jsonlite::toJSON(this_object$`packageCosts`, auto_unbox = TRUE, digits = NA))
      self$`locationStock` <- VpsOrderLocationStock$new()$fromJSON(jsonlite::toJSON(this_object$`locationStock`, auto_unbox = TRUE, digits = NA))
      self$`locationNames` <- VpsOrderLocationNames$new()$fromJSON(jsonlite::toJSON(this_object$`locationNames`, auto_unbox = TRUE, digits = NA))
      self$`osNames` <- VpsOrderOsNames$new()$fromJSON(jsonlite::toJSON(this_object$`osNames`, auto_unbox = TRUE, digits = NA))
      self$`templates` <- VpsOrderTemplates$new()$fromJSON(jsonlite::toJSON(this_object$`templates`, auto_unbox = TRUE, digits = NA))
      self$`serviceTypes` <- VpsOrderServiceTypes$new()$fromJSON(jsonlite::toJSON(this_object$`serviceTypes`, auto_unbox = TRUE, digits = NA))
      self$`currency` <- this_object$`currency`
      self$`currencySymbol` <- this_object$`currencySymbol`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsOrder and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `vpsSliceSsdOvzCost`
      if (!is.null(input_json$`vpsSliceSsdOvzCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsSliceSsdOvzCost` is missing."))
      }
      # check the required field `vpsSliceOvzCost`
      if (!is.null(input_json$`vpsSliceOvzCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsSliceOvzCost` is missing."))
      }
      # check the required field `vpsSliceSsdVirtuozzoCost`
      if (!is.null(input_json$`vpsSliceSsdVirtuozzoCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsSliceSsdVirtuozzoCost` is missing."))
      }
      # check the required field `vpsSliceVirtuozzoCost`
      if (!is.null(input_json$`vpsSliceVirtuozzoCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsSliceVirtuozzoCost` is missing."))
      }
      # check the required field `vpsSliceHypervCost`
      if (!is.null(input_json$`vpsSliceHypervCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsSliceHypervCost` is missing."))
      }
      # check the required field `vpsSliceVmwareCost`
      if (!is.null(input_json$`vpsSliceVmwareCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsSliceVmwareCost` is missing."))
      }
      # check the required field `vpsSliceLxcCost`
      if (!is.null(input_json$`vpsSliceLxcCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsSliceLxcCost` is missing."))
      }
      # check the required field `vpsSliceXenCost`
      if (!is.null(input_json$`vpsSliceXenCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsSliceXenCost` is missing."))
      }
      # check the required field `vpsSliceKvmLCost`
      if (!is.null(input_json$`vpsSliceKvmLCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsSliceKvmLCost` is missing."))
      }
      # check the required field `vpsSliceKvmStorageCost`
      if (!is.null(input_json$`vpsSliceKvmStorageCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsSliceKvmStorageCost` is missing."))
      }
      # check the required field `vpsNyCost`
      if (!is.null(input_json$`vpsNyCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsNyCost` is missing."))
      }
      # check the required field `vpsSliceKvmWCost`
      if (!is.null(input_json$`vpsSliceKvmWCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `vpsSliceKvmWCost` is missing."))
      }
      # check the required field `cpanelCost`
      if (!is.null(input_json$`cpanelCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `cpanelCost` is missing."))
      }
      # check the required field `daCost`
      if (!is.null(input_json$`daCost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `daCost` is missing."))
      }
      # check the required field `ramSlice`
      if (!is.null(input_json$`ramSlice`)) {
        if (!(is.character(input_json$`ramSlice`) && length(input_json$`ramSlice`) == 1)) {
          stop(paste("Error! Invalid data for `ramSlice`. Must be a string:", input_json$`ramSlice`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `ramSlice` is missing."))
      }
      # check the required field `hdSlice`
      if (!is.null(input_json$`hdSlice`)) {
        if (!(is.character(input_json$`hdSlice`) && length(input_json$`hdSlice`) == 1)) {
          stop(paste("Error! Invalid data for `hdSlice`. Must be a string:", input_json$`hdSlice`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `hdSlice` is missing."))
      }
      # check the required field `hdStorageSlice`
      if (!is.null(input_json$`hdStorageSlice`)) {
        if (!(is.character(input_json$`hdStorageSlice`) && length(input_json$`hdStorageSlice`) == 1)) {
          stop(paste("Error! Invalid data for `hdStorageSlice`. Must be a string:", input_json$`hdStorageSlice`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `hdStorageSlice` is missing."))
      }
      # check the required field `bwSlice`
      if (!is.null(input_json$`bwSlice`)) {
        if (!(is.character(input_json$`bwSlice`) && length(input_json$`bwSlice`) == 1)) {
          stop(paste("Error! Invalid data for `bwSlice`. Must be a string:", input_json$`bwSlice`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `bwSlice` is missing."))
      }
      # check the required field `bwType`
      if (!is.null(input_json$`bwType`)) {
        if (!(is.character(input_json$`bwType`) && length(input_json$`bwType`) == 1)) {
          stop(paste("Error! Invalid data for `bwType`. Must be a string:", input_json$`bwType`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `bwType` is missing."))
      }
      # check the required field `bwTotal`
      if (!is.null(input_json$`bwTotal`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `bwTotal` is missing."))
      }
      # check the required field `maxSlices`
      if (!is.null(input_json$`maxSlices`)) {
        if (!(is.character(input_json$`maxSlices`) && length(input_json$`maxSlices`) == 1)) {
          stop(paste("Error! Invalid data for `maxSlices`. Must be a string:", input_json$`maxSlices`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `maxSlices` is missing."))
      }
      # check the required field `platformPackages`
      if (!is.null(input_json$`platformPackages`)) {
        stopifnot(R6::is.R6(input_json$`platformPackages`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `platformPackages` is missing."))
      }
      # check the required field `platformNames`
      if (!is.null(input_json$`platformNames`)) {
        stopifnot(R6::is.R6(input_json$`platformNames`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `platformNames` is missing."))
      }
      # check the required field `packageCosts`
      if (!is.null(input_json$`packageCosts`)) {
        stopifnot(R6::is.R6(input_json$`packageCosts`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `packageCosts` is missing."))
      }
      # check the required field `locationStock`
      if (!is.null(input_json$`locationStock`)) {
        stopifnot(R6::is.R6(input_json$`locationStock`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `locationStock` is missing."))
      }
      # check the required field `locationNames`
      if (!is.null(input_json$`locationNames`)) {
        stopifnot(R6::is.R6(input_json$`locationNames`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `locationNames` is missing."))
      }
      # check the required field `osNames`
      if (!is.null(input_json$`osNames`)) {
        stopifnot(R6::is.R6(input_json$`osNames`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `osNames` is missing."))
      }
      # check the required field `templates`
      if (!is.null(input_json$`templates`)) {
        stopifnot(R6::is.R6(input_json$`templates`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `templates` is missing."))
      }
      # check the required field `serviceTypes`
      if (!is.null(input_json$`serviceTypes`)) {
        stopifnot(R6::is.R6(input_json$`serviceTypes`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `serviceTypes` is missing."))
      }
      # check the required field `currency`
      if (!is.null(input_json$`currency`)) {
        if (!(is.character(input_json$`currency`) && length(input_json$`currency`) == 1)) {
          stop(paste("Error! Invalid data for `currency`. Must be a string:", input_json$`currency`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `currency` is missing."))
      }
      # check the required field `currencySymbol`
      if (!is.null(input_json$`currencySymbol`)) {
        if (!(is.character(input_json$`currencySymbol`) && length(input_json$`currencySymbol`) == 1)) {
          stop(paste("Error! Invalid data for `currencySymbol`. Must be a string:", input_json$`currencySymbol`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsOrder: the required field `currencySymbol` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsOrder
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `vpsSliceSsdOvzCost` is null
      if (is.null(self$`vpsSliceSsdOvzCost`)) {
        return(FALSE)
      }

      # check if the required `vpsSliceOvzCost` is null
      if (is.null(self$`vpsSliceOvzCost`)) {
        return(FALSE)
      }

      # check if the required `vpsSliceSsdVirtuozzoCost` is null
      if (is.null(self$`vpsSliceSsdVirtuozzoCost`)) {
        return(FALSE)
      }

      # check if the required `vpsSliceVirtuozzoCost` is null
      if (is.null(self$`vpsSliceVirtuozzoCost`)) {
        return(FALSE)
      }

      # check if the required `vpsSliceHypervCost` is null
      if (is.null(self$`vpsSliceHypervCost`)) {
        return(FALSE)
      }

      # check if the required `vpsSliceVmwareCost` is null
      if (is.null(self$`vpsSliceVmwareCost`)) {
        return(FALSE)
      }

      # check if the required `vpsSliceLxcCost` is null
      if (is.null(self$`vpsSliceLxcCost`)) {
        return(FALSE)
      }

      # check if the required `vpsSliceXenCost` is null
      if (is.null(self$`vpsSliceXenCost`)) {
        return(FALSE)
      }

      # check if the required `vpsSliceKvmLCost` is null
      if (is.null(self$`vpsSliceKvmLCost`)) {
        return(FALSE)
      }

      # check if the required `vpsSliceKvmStorageCost` is null
      if (is.null(self$`vpsSliceKvmStorageCost`)) {
        return(FALSE)
      }

      # check if the required `vpsNyCost` is null
      if (is.null(self$`vpsNyCost`)) {
        return(FALSE)
      }

      # check if the required `vpsSliceKvmWCost` is null
      if (is.null(self$`vpsSliceKvmWCost`)) {
        return(FALSE)
      }

      # check if the required `cpanelCost` is null
      if (is.null(self$`cpanelCost`)) {
        return(FALSE)
      }

      # check if the required `daCost` is null
      if (is.null(self$`daCost`)) {
        return(FALSE)
      }

      # check if the required `ramSlice` is null
      if (is.null(self$`ramSlice`)) {
        return(FALSE)
      }

      # check if the required `hdSlice` is null
      if (is.null(self$`hdSlice`)) {
        return(FALSE)
      }

      # check if the required `hdStorageSlice` is null
      if (is.null(self$`hdStorageSlice`)) {
        return(FALSE)
      }

      # check if the required `bwSlice` is null
      if (is.null(self$`bwSlice`)) {
        return(FALSE)
      }

      # check if the required `bwType` is null
      if (is.null(self$`bwType`)) {
        return(FALSE)
      }

      # check if the required `bwTotal` is null
      if (is.null(self$`bwTotal`)) {
        return(FALSE)
      }

      # check if the required `maxSlices` is null
      if (is.null(self$`maxSlices`)) {
        return(FALSE)
      }

      # check if the required `platformPackages` is null
      if (is.null(self$`platformPackages`)) {
        return(FALSE)
      }

      # check if the required `platformNames` is null
      if (is.null(self$`platformNames`)) {
        return(FALSE)
      }

      # check if the required `packageCosts` is null
      if (is.null(self$`packageCosts`)) {
        return(FALSE)
      }

      # check if the required `locationStock` is null
      if (is.null(self$`locationStock`)) {
        return(FALSE)
      }

      # check if the required `locationNames` is null
      if (is.null(self$`locationNames`)) {
        return(FALSE)
      }

      # check if the required `osNames` is null
      if (is.null(self$`osNames`)) {
        return(FALSE)
      }

      # check if the required `templates` is null
      if (is.null(self$`templates`)) {
        return(FALSE)
      }

      # check if the required `serviceTypes` is null
      if (is.null(self$`serviceTypes`)) {
        return(FALSE)
      }

      # check if the required `currency` is null
      if (is.null(self$`currency`)) {
        return(FALSE)
      }

      # check if the required `currencySymbol` is null
      if (is.null(self$`currencySymbol`)) {
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
      # check if the required `vpsSliceSsdOvzCost` is null
      if (is.null(self$`vpsSliceSsdOvzCost`)) {
        invalid_fields["vpsSliceSsdOvzCost"] <- "Non-nullable required field `vpsSliceSsdOvzCost` cannot be null."
      }

      # check if the required `vpsSliceOvzCost` is null
      if (is.null(self$`vpsSliceOvzCost`)) {
        invalid_fields["vpsSliceOvzCost"] <- "Non-nullable required field `vpsSliceOvzCost` cannot be null."
      }

      # check if the required `vpsSliceSsdVirtuozzoCost` is null
      if (is.null(self$`vpsSliceSsdVirtuozzoCost`)) {
        invalid_fields["vpsSliceSsdVirtuozzoCost"] <- "Non-nullable required field `vpsSliceSsdVirtuozzoCost` cannot be null."
      }

      # check if the required `vpsSliceVirtuozzoCost` is null
      if (is.null(self$`vpsSliceVirtuozzoCost`)) {
        invalid_fields["vpsSliceVirtuozzoCost"] <- "Non-nullable required field `vpsSliceVirtuozzoCost` cannot be null."
      }

      # check if the required `vpsSliceHypervCost` is null
      if (is.null(self$`vpsSliceHypervCost`)) {
        invalid_fields["vpsSliceHypervCost"] <- "Non-nullable required field `vpsSliceHypervCost` cannot be null."
      }

      # check if the required `vpsSliceVmwareCost` is null
      if (is.null(self$`vpsSliceVmwareCost`)) {
        invalid_fields["vpsSliceVmwareCost"] <- "Non-nullable required field `vpsSliceVmwareCost` cannot be null."
      }

      # check if the required `vpsSliceLxcCost` is null
      if (is.null(self$`vpsSliceLxcCost`)) {
        invalid_fields["vpsSliceLxcCost"] <- "Non-nullable required field `vpsSliceLxcCost` cannot be null."
      }

      # check if the required `vpsSliceXenCost` is null
      if (is.null(self$`vpsSliceXenCost`)) {
        invalid_fields["vpsSliceXenCost"] <- "Non-nullable required field `vpsSliceXenCost` cannot be null."
      }

      # check if the required `vpsSliceKvmLCost` is null
      if (is.null(self$`vpsSliceKvmLCost`)) {
        invalid_fields["vpsSliceKvmLCost"] <- "Non-nullable required field `vpsSliceKvmLCost` cannot be null."
      }

      # check if the required `vpsSliceKvmStorageCost` is null
      if (is.null(self$`vpsSliceKvmStorageCost`)) {
        invalid_fields["vpsSliceKvmStorageCost"] <- "Non-nullable required field `vpsSliceKvmStorageCost` cannot be null."
      }

      # check if the required `vpsNyCost` is null
      if (is.null(self$`vpsNyCost`)) {
        invalid_fields["vpsNyCost"] <- "Non-nullable required field `vpsNyCost` cannot be null."
      }

      # check if the required `vpsSliceKvmWCost` is null
      if (is.null(self$`vpsSliceKvmWCost`)) {
        invalid_fields["vpsSliceKvmWCost"] <- "Non-nullable required field `vpsSliceKvmWCost` cannot be null."
      }

      # check if the required `cpanelCost` is null
      if (is.null(self$`cpanelCost`)) {
        invalid_fields["cpanelCost"] <- "Non-nullable required field `cpanelCost` cannot be null."
      }

      # check if the required `daCost` is null
      if (is.null(self$`daCost`)) {
        invalid_fields["daCost"] <- "Non-nullable required field `daCost` cannot be null."
      }

      # check if the required `ramSlice` is null
      if (is.null(self$`ramSlice`)) {
        invalid_fields["ramSlice"] <- "Non-nullable required field `ramSlice` cannot be null."
      }

      # check if the required `hdSlice` is null
      if (is.null(self$`hdSlice`)) {
        invalid_fields["hdSlice"] <- "Non-nullable required field `hdSlice` cannot be null."
      }

      # check if the required `hdStorageSlice` is null
      if (is.null(self$`hdStorageSlice`)) {
        invalid_fields["hdStorageSlice"] <- "Non-nullable required field `hdStorageSlice` cannot be null."
      }

      # check if the required `bwSlice` is null
      if (is.null(self$`bwSlice`)) {
        invalid_fields["bwSlice"] <- "Non-nullable required field `bwSlice` cannot be null."
      }

      # check if the required `bwType` is null
      if (is.null(self$`bwType`)) {
        invalid_fields["bwType"] <- "Non-nullable required field `bwType` cannot be null."
      }

      # check if the required `bwTotal` is null
      if (is.null(self$`bwTotal`)) {
        invalid_fields["bwTotal"] <- "Non-nullable required field `bwTotal` cannot be null."
      }

      # check if the required `maxSlices` is null
      if (is.null(self$`maxSlices`)) {
        invalid_fields["maxSlices"] <- "Non-nullable required field `maxSlices` cannot be null."
      }

      # check if the required `platformPackages` is null
      if (is.null(self$`platformPackages`)) {
        invalid_fields["platformPackages"] <- "Non-nullable required field `platformPackages` cannot be null."
      }

      # check if the required `platformNames` is null
      if (is.null(self$`platformNames`)) {
        invalid_fields["platformNames"] <- "Non-nullable required field `platformNames` cannot be null."
      }

      # check if the required `packageCosts` is null
      if (is.null(self$`packageCosts`)) {
        invalid_fields["packageCosts"] <- "Non-nullable required field `packageCosts` cannot be null."
      }

      # check if the required `locationStock` is null
      if (is.null(self$`locationStock`)) {
        invalid_fields["locationStock"] <- "Non-nullable required field `locationStock` cannot be null."
      }

      # check if the required `locationNames` is null
      if (is.null(self$`locationNames`)) {
        invalid_fields["locationNames"] <- "Non-nullable required field `locationNames` cannot be null."
      }

      # check if the required `osNames` is null
      if (is.null(self$`osNames`)) {
        invalid_fields["osNames"] <- "Non-nullable required field `osNames` cannot be null."
      }

      # check if the required `templates` is null
      if (is.null(self$`templates`)) {
        invalid_fields["templates"] <- "Non-nullable required field `templates` cannot be null."
      }

      # check if the required `serviceTypes` is null
      if (is.null(self$`serviceTypes`)) {
        invalid_fields["serviceTypes"] <- "Non-nullable required field `serviceTypes` cannot be null."
      }

      # check if the required `currency` is null
      if (is.null(self$`currency`)) {
        invalid_fields["currency"] <- "Non-nullable required field `currency` cannot be null."
      }

      # check if the required `currencySymbol` is null
      if (is.null(self$`currencySymbol`)) {
        invalid_fields["currencySymbol"] <- "Non-nullable required field `currencySymbol` cannot be null."
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
# VpsOrder$unlock()
#
## Below is an example to define the print function
# VpsOrder$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsOrder$lock()

