(ns inter-server-management-api.specs.timezone-update
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def timezone-update-data
  {
   (ds/req :timezone) string?
   })

(def timezone-update-spec
  (ds/spec
    {:name ::timezone-update
     :spec timezone-update-data}))
