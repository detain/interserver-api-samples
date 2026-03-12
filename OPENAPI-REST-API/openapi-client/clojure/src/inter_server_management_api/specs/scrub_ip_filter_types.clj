(ns inter-server-management-api.specs.scrub-ip-filter-types
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.scrub-ip-filter-types-filters-value :refer :all]
            )
  (:import (java.io File)))


(def scrub-ip-filter-types-data
  {
   (ds/opt :success) boolean?
   (ds/opt :filters) (s/map-of string? scrub-ip-filter-types-filters-value-spec)
   })

(def scrub-ip-filter-types-spec
  (ds/spec
    {:name ::scrub-ip-filter-types
     :spec scrub-ip-filter-types-data}))
