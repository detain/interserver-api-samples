(ns inter-server-management-api.specs.get-scrub-ip-details-200-response-filter-firewall
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-filter-firewall-rules-inner :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-filter-firewall-filters-inner :refer :all]
            )
  (:import (java.io File)))


(def get-scrub-ip-details-200-response-filter-firewall-data
  {
   (ds/opt :rules) (s/coll-of get-scrub-ip-details-200-response-filter-firewall-rules-inner-spec)
   (ds/opt :filters) (s/coll-of get-scrub-ip-details-200-response-filter-firewall-filters-inner-spec)
   (ds/opt :scrub_enabled) int?
   })

(def get-scrub-ip-details-200-response-filter-firewall-spec
  (ds/spec
    {:name ::get-scrub-ip-details-200-response-filter-firewall
     :spec get-scrub-ip-details-200-response-filter-firewall-data}))
