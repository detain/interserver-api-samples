(ns inter-server-management-api.specs.view-mail-log-start-date-parameter
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def view-mail-log-start-date-parameter-data
  {
   })

(def view-mail-log-start-date-parameter-spec
  (ds/spec
    {:name ::view-mail-log-start-date-parameter
     :spec view-mail-log-start-date-parameter-data}))
