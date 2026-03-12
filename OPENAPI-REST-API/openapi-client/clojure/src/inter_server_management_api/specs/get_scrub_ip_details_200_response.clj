(ns inter-server-management-api.specs.get-scrub-ip-details-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-service-info :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-client-links-inner :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-billing-details :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-extra-info-tables :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-filter-firewall :refer :all]
            )
  (:import (java.io File)))


(def get-scrub-ip-details-200-response-data
  {
   (ds/opt :serviceInfo) get-scrub-ip-details-200-response-service-info-spec
   (ds/opt :client_links) (s/coll-of get-scrub-ip-details-200-response-client-links-inner-spec)
   (ds/opt :billingDetails) get-scrub-ip-details-200-response-billing-details-spec
   (ds/opt :custCurrency) string?
   (ds/opt :custCurrencySymbol) string?
   (ds/opt :package) string?
   (ds/opt :extraInfoTables) get-scrub-ip-details-200-response-extra-info-tables-spec
   (ds/opt :filter_firewall) get-scrub-ip-details-200-response-filter-firewall-spec
   })

(def get-scrub-ip-details-200-response-spec
  (ds/spec
    {:name ::get-scrub-ip-details-200-response
     :spec get-scrub-ip-details-200-response-data}))
