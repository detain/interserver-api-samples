(ns inter-server-management-api.specs.server-locations
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-location1 :refer :all]
            )
  (:import (java.io File)))


(def server-locations-data
  {
   (ds/opt :1) server-location1-spec
   })

(def server-locations-spec
  (ds/spec
    {:name ::server-locations
     :spec server-locations-data}))
