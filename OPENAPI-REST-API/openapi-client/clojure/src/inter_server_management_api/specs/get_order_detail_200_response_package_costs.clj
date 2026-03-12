(ns inter-server-management-api.specs.get-order-detail-200-response-package-costs
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-order-detail-200-response-package-costs-data
  {
   (ds/opt :package_id) float?
   (ds/opt :package_cost) float?
   (ds/opt :currency) string?
   (ds/opt :currencySymbol) string?
   })

(def get-order-detail-200-response-package-costs-spec
  (ds/spec
    {:name ::get-order-detail-200-response-package-costs
     :spec get-order-detail-200-response-package-costs-data}))
