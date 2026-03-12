(ns inter-server-management-api.specs.quickserver-service-extra
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def quickserver-service-extra-data
  {
   (ds/opt :platform) string?
   })

(def quickserver-service-extra-spec
  (ds/spec
    {:name ::quickserver-service-extra
     :spec quickserver-service-extra-data}))
