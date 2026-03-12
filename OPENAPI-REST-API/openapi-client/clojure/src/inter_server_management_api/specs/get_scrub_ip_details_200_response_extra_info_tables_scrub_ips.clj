(ns inter-server-management-api.specs.get-scrub-ip-details-200-response-extra-info-tables-scrub-ips
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-rows-inner :refer :all]
            )
  (:import (java.io File)))


(def get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-data
  {
   (ds/opt :title) string?
   (ds/opt :rows) (s/coll-of get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-rows-inner-spec)
   })

(def get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-spec
  (ds/spec
    {:name ::get-scrub-ip-details-200-response-extra-info-tables-scrub-ips
     :spec get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-data}))
