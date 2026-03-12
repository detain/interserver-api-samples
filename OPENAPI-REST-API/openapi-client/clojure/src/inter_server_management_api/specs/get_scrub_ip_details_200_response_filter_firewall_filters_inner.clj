(ns inter-server-management-api.specs.get-scrub-ip-details-200-response-filter-firewall-filters-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-scrub-ip-details-200-response-filter-firewall-filters-inner-data
  {
   (ds/opt :daddr) string?
   (ds/opt :dest) string?
   (ds/opt :filter_name) string?
   (ds/opt :destination_ip) string?
   (ds/opt :filter) string?
   })

(def get-scrub-ip-details-200-response-filter-firewall-filters-inner-spec
  (ds/spec
    {:name ::get-scrub-ip-details-200-response-filter-firewall-filters-inner
     :spec get-scrub-ip-details-200-response-filter-firewall-filters-inner-data}))
