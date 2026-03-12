(ns inter-server-management-api.specs.licenses-order-package-costs
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def licenses-order-package-costs-data
  {
   (ds/opt :LicensesOrderPackageCosts11468) float?
   })

(def licenses-order-package-costs-spec
  (ds/spec
    {:name ::licenses-order-package-costs
     :spec licenses-order-package-costs-data}))
