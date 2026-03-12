(ns inter-server-management-api.specs.website
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.website-service-info :refer :all]
            [inter-server-management-api.specs.website-client-link :refer :all]
            [inter-server-management-api.specs.website-billing-details :refer :all]
            [inter-server-management-api.specs.website-service-master :refer :all]
            [inter-server-management-api.specs.website-extra-info-tables :refer :all]
            )
  (:import (java.io File)))


(def website-data
  {
   (ds/opt :serviceInfo) website-service-info-spec
   (ds/opt :client_links) (s/coll-of website-client-link-spec)
   (ds/opt :billingDetails) website-billing-details-spec
   (ds/opt :custCurrency) string?
   (ds/opt :custCurrencySymbol) string?
   (ds/opt :serviceMaster) website-service-master-spec
   (ds/opt :package) string?
   (ds/opt :serviceExtra) (s/coll-of any?)
   (ds/opt :extraInfoTables) website-extra-info-tables-spec
   })

(def website-spec
  (ds/spec
    {:name ::website
     :spec website-data}))
