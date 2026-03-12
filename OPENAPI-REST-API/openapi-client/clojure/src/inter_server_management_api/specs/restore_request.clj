(ns inter-server-management-api.specs.restore-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def restore-request-data
  {
   (ds/opt :backup) string?
   (ds/opt :password) string?
   })

(def restore-request-spec
  (ds/spec
    {:name ::restore-request
     :spec restore-request-data}))
