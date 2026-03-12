(ns inter-server-management-api.specs.scrub-ip-filter-types-filters-value
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def scrub-ip-filter-types-filters-value-data
  {
   (ds/opt :name) string?
   (ds/opt :desc) string?
   })

(def scrub-ip-filter-types-filters-value-spec
  (ds/spec
    {:name ::scrub-ip-filter-types-filters-value
     :spec scrub-ip-filter-types-filters-value-data}))
